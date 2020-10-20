#include <iostream>
#include "TestPaper.h"
#include "XiaoHongTestPaper.h"
#include "XiaoZhangTestPaper.h"

/**
 * 假如你是一个老师，给班上同学出试卷
 * 每个同学的名字和答案不同，其余都相同
 * 老师负责出题，学生负责写名字和答题
 */
int main() {
    std::cout << "Hello, World!" << std::endl;
    TestPaper* xiaohong = new XiaoHongTestPaper;
    TestPaper* xiaozhang = new XiaoZhangTestPaper;
    cout<<"++++++++++++++++++++++++++++"<<endl;
    xiaohong->DoTestPaper();
    cout<<"++++++++++++++++++++++++++++"<<endl;
    xiaozhang->DoTestPaper();
    cout<<"++++++++++++++++++++++++++++"<<endl;
    return 0;
}
