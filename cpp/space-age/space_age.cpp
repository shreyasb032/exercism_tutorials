#include "space_age.h"

namespace space_age {

// TODO: add your solution here
    space_age::space_age(long int age_in_seconds) : age_in_seconds(age_in_seconds) {
        age_in_earth_years = static_cast<double>(age_in_seconds) / 31'557'600;
    }
    space_age::space_age(int age_in_seconds) : age_in_seconds(age_in_seconds) {
        age_in_earth_years = static_cast<double>(age_in_seconds) / 31'557'600;
    }

}  // namespace space_age
