//
// Created by 11445 on 2020/7/31.
//

#include "LiSi.h"

void LiSi::onTeacherComing(int value) {
    stopPlayGame(value);
}

void LiSi::stopPlayGame(int value) {
    cout<<"老师来了"<<value<<"个，李四停止玩游戏"<<endl;
}