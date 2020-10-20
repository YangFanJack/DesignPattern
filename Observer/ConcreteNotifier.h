//
// Created by 11445 on 2020/7/31.
//

#ifndef OBSERVER_CONCRETENOTIFIER_H
#define OBSERVER_CONCRETENOTIFIER_H
#include <iostream>
#include "Notifier.h"
#include <list>
using namespace std;

class ConcreteNotifier : public Notifier{
public:
    virtual void registerListener(Listener* l);
    virtual void removeListener(Listener* l);
    virtual void notify();
    void setValue(int value);
    virtual ~ConcreteNotifier();

private:
    int value;
    list<Listener*> listenerList;
};


#endif //OBSERVER_CONCRETENOTIFIER_H
