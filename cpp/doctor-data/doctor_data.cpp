#include "doctor_data.h"

heaven::Vessel::Vessel(std::string name, int gen) : name_(name), generation(gen) {
    current_system = star_map::System::Sol;
    busters = 0;
}

heaven::Vessel::Vessel(std::string name, int gen, star_map::System system) : name_(name), generation(gen), current_system(system) {
    busters = 0;
}

heaven::Vessel heaven::Vessel::replicate(std::string name) {
    heaven::Vessel out{name, generation + 1, current_system};
    return out;
}

void heaven::Vessel::make_buster() {
    busters++;
}

bool heaven::Vessel::shoot_buster() {
    if (busters > 0) {
        busters--;
        return true;
    }

    return false;
}

std::string heaven::get_older_bob(Vessel vessel1, Vessel vessel2) {
    return vessel1.generation < vessel2.generation ? vessel1.get_name() : vessel2.get_name();
}

bool heaven::in_the_same_system(Vessel vessel1, Vessel vessel2) {
    return vessel1.current_system == vessel2.current_system;
}
