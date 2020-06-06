project(MLStudioLib)

get_filename_component(MLStudioLibDir ${CMAKE_CURRENT_LIST_FILE} PATH)

set(MLStudioLibSources
    ${MLStudioLibDir}/Studio.hpp
    ${MLStudioLibDir}/Studio.cpp
)

add_library(${CMAKE_PROJECT_NAME} ${MLStudioLibSources})

target_include_directories(${PROJECT_NAME} PUBLIC ${MLStudioDir})

target_link_libraries(${PROJECT_NAME}
PUBLIC
    MLCoreLib
    MLProtocolLib
    MLAudioLib
)
