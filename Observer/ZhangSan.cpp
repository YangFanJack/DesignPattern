//
// Created by 11445 on 2020/7/31.
//

#include "ZhangSan.h"

void ZhangSan::onTeacherComing(int value) {
    stopCopyWork(value);
}

void ZhangSan::stopCopyWork(int value) {
    cout<<"老师来了"<<value<<"个，张三停止抄作业"<<endl;
}
