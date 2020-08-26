#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include <set>

#include "Folder.hpp"

class Message{
    friend class Folder;
    friend void swap(Message&, Message&);

public:
    explicit Message(const std::string &str = "") :
        contents(str) { };
    Message(const Message&);
    Message& operator= (const Message&);
    ~Message();

    void save(Folder&);
    void remove(Folder&);

    void add_Folder(Folder&);

private:
    std::string contents;
    std::set<Folder*> folders;

    void add_to_Folder(const Message&);
    void remove_from_Folder();
};

void Message::save(Folder &f){
    folders.insert(&f);
    f.addMsg(this);
}

void Message::remove(Folder &f){
    folders.erase(&f);
    f.remMsg(this);
}

void Message::add_to_Folder(const Message &m){
    for (auto &f : m.folders) f->addMsg(this);
}

Message::Message(const Message &m) : contents(m.contents), folders(m.folders){
    add_to_Folder(m);
}

void Message::remove_from_Folder(){
    for (auto &f : folders) f->remMsg(this);
}

Message::~Message(){
    remove_from_Folder();
}

Message& Message::operator= (const Message &rhs){
    remove_from_Folder();
    contents = rhs.contents;
    folders = rhs.folders;
    add_to_Folder(rhs);
    return *this;
}

void swap(Message &lhs, Message &rhs){
    using std::swap;
    for (auto f : lhs.folders) f->remMsg(&lhs);
    for (auto f : rhs.folders) f->remMsg(&rhs);
    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, lhs.folders);
    for (auto f : lhs.folders) f->addMsg(&lhs);
    for (auto f : rhs.folders) f->addMsg(&rhs);
}

void Message::add_Folder(Folder &f){
    f.addMsg(this);
    folders.insert(&f);
}

#endif