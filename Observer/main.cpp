#include <iostream>
#include "ConcreteNotifier.h"
#include "Notifier.h"
#include "ZhangSan.h"
#include "LiSi.h"
#include "Listener.h"
using namespace std;
/**
 * 监听者监听老师是否来，来了就会通知学生不要抄作业，不要玩游戏了
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    ConcreteNotifier cn;
    Listener* zs = new ZhangSan;
    Listener* ls = new LiSi;
    cn.registerListener(zs);
    cn.registerListener(ls);
    cn.setValue(2);
    cout<<"++++++++++++++++++++++++++++++++++"<<endl;
    cn.removeListener(zs);
    cn.setValue(3);

    return 0;
}
