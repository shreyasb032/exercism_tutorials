#include <string>

namespace log_line {
    std::string message(std::string line) {
        // return the message
        int msg_start = 0;
        for (char c: line) {
            if(c == ':') {
                msg_start += 2;
                break;
            }
            msg_start++;
        }
        return line.substr(msg_start);
    }

    std::string log_level(std::string line) {
        // return the log level
        int log_level_start = 1;
        int log_level_end = 0;
        for (char c: line) {
            if (c == ']') break;
            log_level_end++;
        }
        return line.substr(log_level_start, log_level_end - log_level_start);
    }

    std::string reformat(std::string line) {
        // return the reformatted message
        std::string ans{message(line) + " (" + log_level(line) + ")"};
        return ans;
    }
}  // namespace log_line
