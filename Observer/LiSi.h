//
// Created by 11445 on 2020/7/31.
//

#ifndef OBSERVER_LISI_H
#define OBSERVER_LISI_H
#include <iostream>
#include "Listener.h"
using namespace std;

class LiSi : public Listener{
public:
    void onTeacherComing(int value);
    void stopPlayGame(int value);
};


#endif //OBSERVER_LISI_H
