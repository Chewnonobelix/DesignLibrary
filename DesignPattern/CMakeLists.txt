# Generated from DesignPattern.pro

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_library(ChewnoDesignPattern
    designpattern.cpp
    liveqmlengine.cpp
    metadata.cpp
    DesignPattern_global.h
    designpattern.h
    liveqmlengine.h
    metadata.h
)

target_compile_definitions(ChewnoDesignPattern PRIVATE
    "DESIGNPATTERN_LIBRARY"
    "QT_DEPRECATED_WARNINGS"
)

target_link_libraries(ChewnoDesignPattern PRIVATE
    Qt6::Core
    Qt6::Quick
)

target_include_directories(ChewnoDesignPattern PUBLIC
   ${CMAKE_CURRENT_SOURCE_DIR}
)

add_custom_target(run_tests_designpattern
    COMMAND ${CMAKE_CTEST_COMMAND}
)