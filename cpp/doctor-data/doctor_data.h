#pragma once
#include<string>

namespace star_map {
    enum class System {
        BetaHydri,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani,
        EpsilonEridani,
        Sol
    };
}

namespace heaven {

    class Vessel {
        private:
            std::string name_;
        public:
            Vessel(std::string name, int gen);
            Vessel(std::string name, int gen, star_map::System system);
            heaven::Vessel replicate(std::string);
            void make_buster();
            bool shoot_buster();

            int generation;
            int busters;
            star_map::System current_system;
            std::string get_name() {
                return name_;
            };

    };

    std::string get_older_bob(Vessel vessel1, Vessel vessel2);
    bool in_the_same_system(Vessel vessel1, Vessel vessel2);

} //namespace heaven


