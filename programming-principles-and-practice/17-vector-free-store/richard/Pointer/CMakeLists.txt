CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(Pointer)

ADD_DEFINITIONS("-std=c++11")

ADD_EXECUTABLE (Pointer
    main.cpp
)

 TARGET_LINK_LIBRARIES(Pointer)
