//
// Created by 11445 on 2020/7/31.
//

#ifndef OBSERVER_ZHANGSAN_H
#define OBSERVER_ZHANGSAN_H
#include <iostream>
#include "Listener.h"
using namespace std;

class ZhangSan : public Listener{
public:
    void onTeacherComing(int value);
    void stopCopyWork(int value);
};


#endif //OBSERVER_ZHANGSAN_H
