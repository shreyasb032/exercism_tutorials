#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
std:: string convert(int num) {
    std::string out = "";
    if (num % 3 == 0) {
        out += "Pling";
    }
    if (num % 5 == 0) {
        out += "Plang";
    }
    if (num % 7 == 0) {
        out += "Plong";
    }

    if (out.size() == 0) {
        return std::to_string(num);
    }

    return out;
}

}  // namespace raindrops
