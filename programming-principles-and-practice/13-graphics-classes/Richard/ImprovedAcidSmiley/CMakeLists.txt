CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(ImprovedAcidSmiley)

ADD_DEFINITIONS("-std=c++11")

FIND_PACKAGE(FLTK REQUIRED)

ADD_EXECUTABLE (ImprovedAcidSmiley
    main.cpp
    Window.cpp
    Simple_window.cpp
    GUI.cpp
    Graph.cpp
    Smiley.cpp
)

TARGET_LINK_LIBRARIES(ImprovedAcidSmiley
    ${FLTK_LIBRARIES}
)
