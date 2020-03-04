#ifndef __LINK_LIST_H__
#define __LINK_LIST_H__

template <typename T>
class LinkListNode
{
public:
    LinkListNode() {}
    LinkListNode(T t) { this->t = t; }
    T t;
    LinkListNode *next;
};

template <typename T>
class LinkList
{
public:
    LinkList();
    ~LinkList();
    void add(T t);
    T get(int index);
    int insert(T t, int index);
    inline unsigned getLength() { return this->length; }

private:
    unsigned int length;
    LinkListNode *head; //链表头 空节点
    LinkListNode *tag;
};

template <typename T>
LinkList<T>::LinkList()
{
    head = new LinkListNode<T>;
    tag = head;
    length = 0;
}

template <typename T>
LinkList<T>::~LinkList()
{
    while (head->next)
    {
        delete head;
        head = head->next;
    }
}

template <typename T>
void LinkList<T>::add(T t)
{
    tag->next = new LinkListNode<T>(t);
    tag = tag->next;
}

template <typename T>
T LinkList<T>::get(int index)
{
    int i = 0;
    LinkListNode<T> *p = head;
    while (i < index)
    {
        i++;
        p = p->next;
    }
    return p->t;
}

template <typename T>
int LinkList<T>::insert(T t, int index)
{
    if (index > -1 && index < length)
    {
        LinkListNode<T> *new_node = new LinkListNode<T>(t);
        LinkListNode<T> *p = head;
        int i = 0;
        while (i < index)
        {
            p = p->next;
            i++;
        }
    }
    return -1;
}

#endif