//
// Created by 11445 on 2020/8/1.
//

#include "DecoratorPhone.h"

void DecoratorPhone::showDecorator() {
    p_phone->showDecorator();
}

DecoratorPhone::~DecoratorPhone(){
    delete p_phone;
}