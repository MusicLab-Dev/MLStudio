project(MLStudio)

get_filename_component(MLStudioDir ${CMAKE_CURRENT_LIST_FILE} PATH)

include(${MLStudioDir}/MLStudio/MLStudioLib.cmake)
include(${MLStudioDir}/MLStudioApp/MLStudioApp.cmake)

if (${ML_TESTS})
    include(${MLStudioDir}/Tests/MLStudioTests.cmake)
endif ()

if (${ML_BENCHMARKS})
    include(${MLStudioDir}/Benchmarks/MLStudioBenchmarks.cmake)
endif ()