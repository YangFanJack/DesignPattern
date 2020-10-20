#include <iostream>
#include "Phone.h"
#include "NokiaPhone.h"
#include "IPhone.h"
#include "DecoratorPhone.h"
#include "DecoratorPhoneA.h"
#include "DecoratorPhoneB.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Phone* iphone = new IPhone("6300");
    Phone* step1 = new DecoratorPhoneA(iphone);
    Phone* step2 = new DecoratorPhoneB(step1);
    step2->showDecorator();
    delete step2;
    return 0;
}
