cmake_minimum_required(VERSION 3.12)
project(Simple3DEngine)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Gui REQUIRED)

get_target_property(QtCoreLocation Qt5::Core LOCATION)

add_executable(Simple3DEngine main.cpp render/Canvas.cpp render/Canvas.h playground/OrthographicCamera.cpp playground/OrthographicCamera.h playground/Playground.cpp playground/Playground.h Utils.h playground/GeometryHolder.cpp playground/GeometryHolder.h playground/SimpleCube.cpp playground/SimpleCube.h render/Renderer.cpp render/Renderer.h render/Vector.cpp render/Vector.h)

target_link_libraries(Simple3DEngine Qt5::Widgets)
