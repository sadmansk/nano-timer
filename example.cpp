#include <iostream>
#include <thread>
#include <chrono>
#include "timer.h"

int main (int argc, char* argv[]) {

    std::cout << "Remember that it takes a while to carry out print operations."
        << std::endl;

    // prints the elapsed time from the start of the program
    std::cout << "Current elapsed time (from the start of the program) in nanoseconds: "
        << Timer::elapsed() << std::endl;

    // show new elapsed time after sleeping for a second
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "After sleeping for a second, time passed in nanoseconds: " <<
        Timer::elapsed() << std::endl;

    // reset and print the new time
    std::cout << "Resetting the timer..." << std::endl;
    Timer::reset();

    std::cout << "After reset, elapsed time in nanoseconds: " << Timer::elapsed()
        << std::endl;

    return 0;
}
