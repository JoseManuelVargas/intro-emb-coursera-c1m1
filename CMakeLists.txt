cmake_minimum_required(VERSION 3.16)


set(CMAKE_C_STANDARD 11)


project(c1m1)


include_directories(${PROEJCT_NAME} statistics)
add_executable(${PROJECT_NAME} statistics/stats.c)


