//
// Created by 11445 on 2020/8/1.
//

#ifndef DECORATOR_DECORATORPHONEB_H
#define DECORATOR_DECORATORPHONEB_H
#include <iostream>
#include "DecoratorPhone.h"
using namespace std;

class DecoratorPhoneB : public DecoratorPhone{
public:
    DecoratorPhoneB(Phone* phone) : DecoratorPhone(phone){}
    void showDecorator();
    void AddDecorator();
};


#endif //DECORATOR_DECORATORPHONEB_H
