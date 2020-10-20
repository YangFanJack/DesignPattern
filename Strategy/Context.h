//
// Created by 11445 on 2020/7/31.
//

#ifndef STRATEGY_CONTEXT_H
#define STRATEGY_CONTEXT_H
#include <iostream>
#include "Strategy.h"
using namespace std;

class Context {
public:
    Context(Strategy* pStrategyArg) : pStrategy(pStrategyArg){}
    void  ContextInterface();
    ~Context();
private:
    Strategy* pStrategy;
};


#endif //STRATEGY_CONTEXT_H
