# Generated from DesignPattern.pro

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_library(DesignPattern
    designpattern.cpp
    liveqmlengine.cpp
    metadata.cpp
    DesignPattern_global.h
    designpattern.h
    liveqmlengine.h
    metadata.h
)

target_compile_definitions(DesignPattern PRIVATE
    "DESIGNPATTERN_LIBRARY"
    "QT_DEPRECATED_WARNINGS"
)

target_link_libraries(DesignPattern PRIVATE
    Qt6::Core
    Qt6::Quick
)

target_include_directories(DesignPattern PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}
)
