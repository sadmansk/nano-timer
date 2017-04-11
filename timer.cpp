//since C++ does not allow definition of static data members inside header files, we need to use this .cpp file for initializing
//the starting time

#include "timer.h"

std::chrono::time_point<clock_> Timer::start = clock_::now();
