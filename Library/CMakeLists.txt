project(Library)

add_library(
    ${PROJECT_NAME}
    ColorEnum.h
    DirectionEnum.h
    Disc.cpp
    Disc.h
    DiscFactory.cpp
    DiscFactory.h
    Field.cpp
    Field.h
    Game.cpp
    Game.h
    Position.h
    RedDisc.cpp
    RedDisc.h
    YellowDisc.cpp
    YellowDisc.h
)

target_include_directories(
    ${PROJECT_NAME}
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)