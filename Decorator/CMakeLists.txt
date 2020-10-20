cmake_minimum_required(VERSION 3.16)
project(Decorator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Decorator main.cpp Phone.h NokiaPhone.cpp NokiaPhone.h IPhone.cpp IPhone.h DecoratorPhone.cpp DecoratorPhone.h DecoratorPhoneA.cpp DecoratorPhoneA.h DecoratorPhoneB.cpp DecoratorPhoneB.h)