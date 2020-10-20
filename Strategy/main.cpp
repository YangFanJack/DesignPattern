#include <iostream>
#include "Strategy.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Context.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Strategy* pStrategyA = new ConcreteStrategyA;
    Strategy* PStrategyB = new ConcreteStrategyB;
    Context* context = new Context(pStrategyA);
    context->ContextInterface();
    delete context;
    context = new Context(PStrategyB);
    context->ContextInterface();
    delete  context;
    return 0;
}
