project(MLStudioBenchmarks)

set(MLStudioBenchmarksDir ${MLStudioDir}/Benchmarks)

set(MLStudioBenchmarksSources
    ${MLStudioBenchmarksDir}/Main.cpp
    ${MLStudioBenchmarksDir}/bench_Studio.cpp
)

add_executable(${CMAKE_PROJECT_NAME} ${MLStudioBenchmarksSources})

target_link_libraries(${CMAKE_PROJECT_NAME}
PUBLIC
    benchmark
    MLStudioLib
)