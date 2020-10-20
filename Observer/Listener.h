//
// Created by 11445 on 2020/7/31.
//

#ifndef OBSERVER_LISTENER_H
#define OBSERVER_LISTENER_H
#include <iostream>
using namespace std;

class Listener {
public:
    virtual void onTeacherComing(int value) = 0;
    virtual ~Listener(){}
};


#endif //OBSERVER_LISTENER_H
