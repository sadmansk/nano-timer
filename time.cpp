//since C++ does not allow definition of static data members inside header files, we need to use this .cpp file for initializing 
//the starting time

#include "time.h"

std::chrono::time_point<clock_> Time::start = clock_::now();