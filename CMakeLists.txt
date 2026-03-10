cmake_minimum_required(VERSION 3.16)
project(ChewnonDesignPattern LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Test Qml Quick QuickControls2 Network Sql Xml)
# Note: components above are a superset; you can trim later.

add_subdirectory(DesignPattern)
add_subdirectory(DesignPatternTest/LiveEngineTest)
add_subdirectory(DesignPatternTest/MetaDataTest)
