//
// Created by 11445 on 2020/8/1.
//

#include "DecoratorPhoneA.h"

void DecoratorPhoneA::showDecorator() {
    DecoratorPhone::showDecorator();
    AddDecorator();
}

void DecoratorPhoneA::AddDecorator() {
    cout<<"增加挂件"<<endl;
}