//
// Created by 11445 on 2020/8/1.
//

#ifndef DECORATOR_NOKIAPHONE_H
#define DECORATOR_NOKIAPHONE_H
#include <iostream>
#include <string>
#include "Phone.h"
using namespace std;

class NokiaPhone : public Phone {
public:
    NokiaPhone(string name) : p_name(name){}
    ~NokiaPhone(){}
    void showDecorator();


private:
    string p_name;
};


#endif //DECORATOR_NOKIAPHONE_H
