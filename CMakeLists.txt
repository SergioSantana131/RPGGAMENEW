cmake_minimum_required(VERSION 3.27)
project(RPGGAMENEW)

set(CMAKE_CXX_STANDARD 23)

add_executable(RPGGAMENEW main.cpp
        Enemy/Enemy.cpp
        Enemy/Enemy.h
        Character/Character.cpp
        Character/Character.h
        Player/Player.cpp
        Player/Player.h
)
