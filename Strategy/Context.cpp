//
// Created by 11445 on 2020/7/31.
//

#include "Context.h"

void Context::ContextInterface() {
    pStrategy->AlgorithmInterface();
}

Context::~Context() {
    delete pStrategy;
}
