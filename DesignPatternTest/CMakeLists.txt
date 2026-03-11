# Generated from ModelTests.pro

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(TestLiveEngine LiveEngineTest/tst_liveengine.cpp LiveEngineTest/liveenginetest.qrc)
add_executable(TestMetaData MetaDataTest/metadatatest.cpp)


target_compile_definitions(TestLiveEngine PRIVATE
    "FOLDER=\"${CMAKE_CURRENT_SOURCE_DIR}/LiveEngineTest/Folder1/|${CMAKE_CURRENT_SOURCE_DIR}/LiveEngineTest/Folder2/\""
)

target_compile_definitions(DesignPattern PUBLIC "ENABLE_HOTRELOADING")

target_link_libraries(TestLiveEngine PRIVATE
    Qt6::Test
    Qt6::Xml
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    DesignPattern
)
target_link_libraries(TestMetaData PRIVATE
    Qt6::Test
    Qt6::Xml
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    DesignPattern
)
