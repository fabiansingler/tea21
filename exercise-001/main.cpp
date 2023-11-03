#include <fmt/chrono.h>
#include <fmt/format.h>

#include <iostream>
#include <random>

#include "CLI/CLI.hpp"
#include "config.h"
int bss;
int data = 4711;
const int rodata = 4711;
int bss2;

auto main(int argc, char **argv) -> int
{
    

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Value of variable bss {} adress of variable foo {}\n",
    bss,
    fmt::ptr(&bss));

    fmt::print("Value of variable data {} adress of variable data {}\n",
    data,
    fmt::ptr(&data));

    fmt::print("Value of variable rodata {} adress of variable rodata {}\n",
    rodata,
    fmt::ptr(&rodata));

    fmt::print("Value of variable bss2 {} adress of variable bss2 {}\n",
    bss2,
    fmt::ptr(&bss2));




    return 0; /* exit gracefully*/
}
