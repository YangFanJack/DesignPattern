//
// Created by 11445 on 2020/8/1.
//

#ifndef DECORATOR_DECORATORPHONE_H
#define DECORATOR_DECORATORPHONE_H
#include "Phone.h"

class DecoratorPhone : public Phone{
public:
    DecoratorPhone(Phone* phone) : p_phone(phone){}
    void showDecorator();
    virtual ~DecoratorPhone();
private:
    Phone* p_phone;
};


#endif //DECORATOR_DECORATORPHONE_H
