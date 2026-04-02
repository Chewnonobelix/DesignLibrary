# Generated from ModelTests.pro

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(TestLiveEngine LiveEngineTest/tst_liveengine.cpp LiveEngineTest/liveenginetest.qrc)
add_executable(TestMetaData MetaDataTest/metadatatest.cpp)


target_compile_definitions(TestLiveEngine PRIVATE
    "FOLDER=\"${CMAKE_CURRENT_SOURCE_DIR}/LiveEngineTest/Folder1/|${CMAKE_CURRENT_SOURCE_DIR}/LiveEngineTest/Folder2/\""
)

target_compile_definitions(ChewnoDesignPattern PUBLIC "ENABLE_HOTRELOADING")

target_link_libraries(TestLiveEngine PRIVATE
    Qt6::Test
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    ChewnoDesignPattern
)
target_link_libraries(TestMetaData PRIVATE
    Qt6::Test
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    ChewnoDesignPattern
)

add_test(NAME TestLiveEngine COMMAND TestLiveEngine)
add_test(NAME TestMetaData COMMAND TestMetaData)

add_custom_target(run_designpattern_tests
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS
        TestMetaData
        TestLiveEngine
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
)
