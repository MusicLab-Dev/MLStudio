/**
 * @ Author: Matthieu Moinvaziri
 * @ Description: Benchmark of the Studio class
 */

#include <benchmark/benchmark.h>

#include <MLStudio/Studio.hpp>

using namespace ML;

static void StudioCreationDestruction(benchmark::State &state)
{
    for (auto _ : state) {
        Studio instance;
        benchmark::DoNotOptimize(instance);
    }
}

BENCHMARK(StudioCreationDestruction);