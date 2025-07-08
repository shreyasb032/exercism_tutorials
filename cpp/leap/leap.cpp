#include "leap.h"

namespace leap {

// TODO: add your solution here
bool is_leap_year(int year) {
    bool condition1 = year % 4 == 0;
    if (!condition1) return false;
    bool condition2 = year % 100 == 0;
    if (condition2) return year % 400 == 0;
    return true;
}

}  // namespace leap
