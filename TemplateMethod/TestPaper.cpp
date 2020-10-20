//
// Created by 11445 on 2020/7/30.
//

#include "TestPaper.h"

void TestPaper::DoTestPaper() {
    StudentName();
    TestTitleOne();
    TestTitleTwo();
}

void TestPaper::TestTitleOne() {
    cout<<"题目一：世界上面积最大的国家是哪个？";
    AnswerOne();
}

void TestPaper::TestTitleTwo() {
    cout<<"题目二：世界上面积最小的国家是哪个？";
    AnswerTwo();
}
