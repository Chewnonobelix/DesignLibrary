# Generated from MetaDataTest.pro

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(MetaDataTest
    metadatatest.cpp
)

target_include_directories(MetaDataTest PRIVATE
    $${PWD}/../../DesignPattern
)

target_link_libraries(MetaDataTest PRIVATE
    Qt6::Test
    Qt6::Xml
    Qt6::Core
    DesignPattern
)

add_test(NAME MetaDataTest COMMAND MetaDataTest)
