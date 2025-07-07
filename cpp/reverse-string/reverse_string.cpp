#include "reverse_string.h"

namespace reverse_string {

// TODO: add your solution here
std::string reverse_string(const std::string& input) {
    std::string out = "";
    for (size_t i = 0; i < input.size(); i++) {
        out += input[input.size() - i - 1];
    }
    return out;
}

}  // namespace reverse_string
