cmake_minimum_required(VERSION 3.12)
project(Holy3DEngine)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)

get_target_property(QtCoreLocation Qt5::Core LOCATION)

add_executable(Holy3DEngine main.cpp Canvas.cpp Canvas.h Camera.cpp Camera.h)

target_link_libraries(Holy3DEngine Qt5::Widgets)
