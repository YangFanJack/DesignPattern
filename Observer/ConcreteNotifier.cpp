//
// Created by 11445 on 2020/7/31.
//

#include "ConcreteNotifier.h"

void ConcreteNotifier::registerListener(Listener* l){
    listenerList.push_back(l);
}
void ConcreteNotifier::removeListener(Listener* l){
    list<Listener*>::iterator it;
    for(it = listenerList.begin();it!=listenerList.end();it++){
        if(*it == l){
            listenerList.remove(l);
            break;
        }
    }
}
void ConcreteNotifier::notify(){
    list<Listener*>::iterator it;
    for(it = listenerList.begin();it!=listenerList.end();it++){
        (*it)->onTeacherComing(value);
    }
}

void ConcreteNotifier::setValue(int value){
    this->value = value;
    notify();
}

ConcreteNotifier::~ConcreteNotifier(){
    list<Listener*>::iterator it;
    for(it = listenerList.begin();it!=listenerList.end();it++){
        delete *it;
    }
}