project(MLStudioLib)

get_filename_component(MLStudioLibDir ${CMAKE_CURRENT_LIST_FILE} PATH)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Quick REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Quick REQUIRED)

set(MLStudioLibSources
    ${MLStudioLibDir}/Studio.hpp
    ${MLStudioLibDir}/Studio.cpp
)

add_library(${PROJECT_NAME} ${MLStudioLibSources})

target_include_directories(${PROJECT_NAME} PUBLIC ${MLStudioDir})

target_link_libraries(${PROJECT_NAME}
PUBLIC
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Quick
)

target_compile_definitions(${PROJECT_NAME}
PRIVATE
    $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>
)

