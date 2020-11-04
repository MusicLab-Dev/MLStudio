project(MLStudioApp)

get_filename_component(MLStudioAppDir ${CMAKE_CURRENT_LIST_FILE} PATH)

set(MLStudioAppSources
    ${MLStudioAppDir}/Main.cpp
)

set(MLStudioAppResources
    ${MLStudioAppDesignDir}/Design.qrc
    ${MLStudioAppDesignDir}/Default/Default.qrc
)

add_executable(${PROJECT_NAME} ${MLStudioAppSources} ${MLStudioAppResources})

target_include_directories(${PROJECT_NAME} PUBLIC ${MLStudioDir})

target_link_libraries(${PROJECT_NAME}
PUBLIC
    MLStudioLib
)
