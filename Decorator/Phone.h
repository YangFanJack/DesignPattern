//
// Created by 11445 on 2020/8/1.
//

#ifndef DECORATOR_PHONE_H
#define DECORATOR_PHONE_H

class Phone {
public:
    Phone(){}
    virtual ~Phone(){}
    virtual void showDecorator() = 0;
};


#endif //DECORATOR_PHONE_H
