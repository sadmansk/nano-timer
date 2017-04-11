Nano timer
==========

C++ static utility for nanosecond precision time
------------------------------------------------

### Usage:

Add `#include "path/to/timer.h"` to the file where you want to use the timer.

`Timer::reset()` resets the start time to the current time.

`Timer::elapsed()` returns the elapsed duration between the start time and current
time.

> Initially, start time is initialized to the current time, i.e. time at the start
of the program.

The file `example.cpp` file contains usage examples. To run the example file:

```
g++ -o example example.cpp timer.h timer.cpp
./example
```

### License:
See [LICENSE](LICENSE) for more details.
