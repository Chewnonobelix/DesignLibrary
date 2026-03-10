# Generated from LiveEngineTest.pro

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(LiveEngineTest
    tst_liveengine.cpp
    liveenginetest.qrc
)

target_compile_definitions(LiveEngineTest PRIVATE
    "ENABLE_HOTRELOADING"
    "FOLDER=\"${CMAKE_CURRENT_SOURCE_DIR}/Folder1/|${CMAKE_CURRENT_SOURCE_DIR}/Folder2/\""
)

target_link_libraries(LiveEngineTest PRIVATE
    Qt6::Test
    Qt6::Xml
    Qt6::Core
    Qt6::Quick
    Qt6::Qml
    DesignPattern
)


add_test(NAME LiveEngineTest COMMAND LiveEngineTest)
