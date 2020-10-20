//
// Created by 11445 on 2020/8/1.
//

#ifndef DECORATOR_DECORATORPHONEA_H
#define DECORATOR_DECORATORPHONEA_H
#include <iostream>
#include "DecoratorPhone.h"
using namespace std;

class DecoratorPhoneA : public DecoratorPhone{
public:
    DecoratorPhoneA(Phone* phone) : DecoratorPhone(phone){}
    void showDecorator();
    void AddDecorator();
};


#endif //DECORATOR_DECORATORPHONEA_H
