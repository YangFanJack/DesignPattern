//
// Created by 11445 on 2020/7/30.
//

#ifndef TEMPLATEMETHOD_TESTPAPER_H
#define TEMPLATEMETHOD_TESTPAPER_H
#include <iostream>
using namespace std;

class TestPaper {
public:
    void DoTestPaper();
    void TestTitleOne();
    void TestTitleTwo();
    virtual void AnswerOne() = 0;
    virtual void AnswerTwo() = 0;
    virtual void StudentName() = 0;
};


#endif //TEMPLATEMETHOD_TESTPAPER_H
