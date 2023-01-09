#include<iostream>

template<typename T>
struct node
{
    T value;
    node* next;
};


template <typename T>
class stack
{
    public:
    node<T>* topNode;
    public:
    stack();
    stack(T);
    void push(T);
    void pop();
    bool empty() const;
    long long size() const;
    T topElement() const;
};

template<typename T>
stack<T>::stack()
{
    std::cout<<"ELO";
    topNode = new node<T>;
}

template<typename T>
stack<T>::stack(T element)
{
    topNode = new node<T>;
    topNode->value = element;
    topNode->next = nullptr;
}

template<typename T>
void stack<T>::push(T element)
{
    node<T>* newLink = new node<T>;
    newLink->value = element;
    newLink->next = topNode;
    topNode = newLink;
}

template<typename T>
void stack<T>::pop()
{
    auto temp = topNode;
    topNode = temp->next;
    delete temp;
    temp = nullptr;
}

template<typename T>
bool stack<T>::empty() const
{
    return topNode == nullptr ? true : false;
}

template<typename T>
long long stack<T>::size() const
{
    long long count = 0;
    auto nodeCopy = topNode;
    while(nodeCopy)
    {
        nodeCopy = nodeCopy->next;
        count++;
    }
    return count;
}

template<typename T>
T stack<T>::topElement() const
{
    return topNode->value;
}

template<typename T>
std::ostream& operator<<(std::ostream& os,const stack<T>& container)
{
    os<<"|"<<container.topElement()<<"|\n";
    auto nodeCopy = container.topNode->next;
    while(nodeCopy)
    {
        os<<"|"<<nodeCopy->value<<"|"<<std::endl;
        nodeCopy = nodeCopy->next;
    }
    return os;
}


//TODO
// template<typename T>
// stack<T>& operator+=(stack<T>& other)
// {
//  return *this
// }