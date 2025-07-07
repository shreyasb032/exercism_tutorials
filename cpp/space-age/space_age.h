#pragma once

namespace space_age {

// TODO: add your solution here
class space_age {
    public:
        // Constructor
        space_age(int age_in_seconds);
        space_age(long int age_in_seconds);

        int seconds() const {
            return age_in_seconds;
        }

        double on_earth() const {
            return age_in_earth_years;
        }
        double on_mercury() const {
            return age_in_earth_years / 0.2408467;
        }
        double on_venus() const {
            return age_in_earth_years / 0.61519726;
        }
        double on_mars() const {
            return age_in_earth_years / 1.8808158;
        }
        double on_jupiter() const {
            return age_in_earth_years / 11.862615;
        }
        double on_saturn() const {
            return age_in_earth_years / 29.447498;
        }
        double on_uranus() const {
            return age_in_earth_years / 84.016846;
        }
        double on_neptune() const {
            return age_in_earth_years / 164.79132;
        }

    private:
        long age_in_seconds;
        double age_in_earth_years;
};
}  // namespace space_age
