cmake_minimum_required(VERSION 3.28)
project(untitled6)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(untitled6 main.cpp
        "Form Files/LOAD_SCREEN/testui.cpp"
        "Form Files/LOAD_SCREEN/testui.h"
        "Form Files/LOAD_SCREEN/testui.ui")
target_link_libraries(untitled6
        Qt6::Core
        Qt6::Gui
        Qt6::Widgets
)

set(CMAKE_PREFIX_PATH "C:\\Qt\\6.6.3\\mingw_64")
