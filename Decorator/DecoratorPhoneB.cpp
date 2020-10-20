//
// Created by 11445 on 2020/8/1.
//

#include "DecoratorPhoneB.h"

void DecoratorPhoneB::showDecorator() {
    DecoratorPhone::showDecorator();
    AddDecorator();
}

void DecoratorPhoneB::AddDecorator() {
    cout<<"屏幕贴膜"<<endl;
}