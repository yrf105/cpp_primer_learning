#ifndef FOLDER_H
#define FOLDER_H

#include <set>

class Message;

class Folder{

public:
    void addMsg(const Message*);
    void remMsg(const Message*);

private:
    std::set<const Message*> msgs;

};

void Folder::addMsg(const Message *m){
    msgs.insert(m);
}

void Folder::remMsg(const Message *m){
    msgs.erase(m);
}

#endif