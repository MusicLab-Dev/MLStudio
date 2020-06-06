project(MLStudioTests)

set(MLStudioTestsDir ${MLStudioDir}/Tests)

set(MLStudioTestsSources
    ${MLStudioTestsDir}/Main.cpp
    ${MLStudioTestsDir}/tests_Studio.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${MLStudioTestsSources})

add_test(NAME ${CMAKE_PROJECT_NAME} COMMAND ${CMAKE_PROJECT_NAME})

target_link_libraries(${CMAKE_PROJECT_NAME}
PUBLIC
    gtest
    MLStudioLib
)