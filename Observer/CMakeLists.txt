cmake_minimum_required(VERSION 3.16)
project(Observer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Observer main.cpp Notifier.h ConcreteNotifier.cpp ConcreteNotifier.h Listener.h ZhangSan.cpp ZhangSan.h LiSi.cpp LiSi.h)