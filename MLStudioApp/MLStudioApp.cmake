project(MLStudioApp)

get_filename_component(MLStudioAppDir ${CMAKE_CURRENT_LIST_FILE} PATH)

set(MLStudioAppSources
    ${MLStudioAppDir}/Main.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${MLStudioAppSources})

target_include_directories(${PROJECT_NAME} PUBLIC ${MLStudioDir})

target_link_libraries(${PROJECT_NAME}
PUBLIC
    MLStudioLib
)
