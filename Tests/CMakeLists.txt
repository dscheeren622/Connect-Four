project(Tests)

include(CTest)

find_package(GTest REQUIRED)

add_executable(
    ${PROJECT_NAME}
    main.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
    Library
    GTest::gtest_main
)

gtest_discover_tests(${PROJECT_NAME})