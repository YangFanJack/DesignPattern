//
// Created by 11445 on 2020/8/1.
//

#ifndef DECORATOR_IPHONE_H
#define DECORATOR_IPHONE_H
#include <iostream>
#include <string>
#include "Phone.h"
using namespace std;

class IPhone : public Phone {
public:
    IPhone(string name) : p_name(name){}
    ~IPhone(){}
    void showDecorator();

private:
    string p_name;
};


#endif //DECORATOR_IPHONE_H
