#include "grains.h"
#include <cmath>

namespace grains {

// TODO: add your solution here

unsigned long long square(int index) {
    if (index == 1) {
        return 1;
    }
    return 2 * square(index - 1);
}

unsigned long long total() {
    return square(65) - 1;
}

}  // namespace grains
