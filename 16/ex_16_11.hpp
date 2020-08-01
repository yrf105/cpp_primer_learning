#ifndef EX_16_11_HPP
#define EX_16_11_HPP

template <typename elemType> class ListItem;
template <typename elemType> 
class List {
public:
    List() {}
    List (const List<elemType> &) {}
    List<elemType>& operator= (const List<elemType> &) {};
    ~List() {}

    void insert(ListItem<elemType> *ptr, elemType value);

private:
    ListItem<elemType> *front, *end;
};

template <typename T>
class ListItem {
public:
    ListItem() = default;
};

#endif 