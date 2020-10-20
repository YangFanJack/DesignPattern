//
// Created by 11445 on 2020/7/31.
//

#ifndef OBSERVER_NOTIFIER_H
#define OBSERVER_NOTIFIER_H
#include <iostream>
#include "Listener.h"
using namespace std;

class Notifier {
public:
    virtual void registerListener(Listener* l) = 0;
    virtual void removeListener(Listener* l) = 0;
    virtual void notify() = 0;
    virtual ~Notifier(){}
};


#endif //OBSERVER_NOTIFIER_H
