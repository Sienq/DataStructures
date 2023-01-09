#include "stack/include/stack.hpp"
#include <iostream>



int main()
{
    std::cout <<"HELLO HERE";
    stack<int> stos(45);
    std::cout<<stos.topNode->value<<std::endl;
    std::cout<<stos.topNode<<std::endl;
    stos.push(55);
    stos.push(65);
    std::cout<<stos<<std::endl;
    stos.pop();
    std::cout<<stos<<std::endl;
    stos.push(76);
    std::cout<<stos<<std::endl;
    // int a = 5;
    // stos.push(a);
    // std::cout<<&stos<<std::endl;
    // std::cout<<stos.next<<std::endl;
    // std::cout<<stos.value<<std::endl;
    // std::cout<<stos.topElement();
    // // stos.push(cos);
    // stos.pop(cos);
    // stos.display();
    // stos.topElement();
    // stos.size();


    return 0;
}