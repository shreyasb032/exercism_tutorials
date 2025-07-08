#pragma once

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

struct human {
    std::unique_ptr<artifact> possession;
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by;

    human() : possession(nullptr), own_power(nullptr), influenced_by(nullptr) {

    }
};
    void give_new_artifact(human& h, std::string name);

    void exchange_artifacts(std::unique_ptr<artifact>& art1, std::unique_ptr<artifact>& art2);

    void manifest_power(human& h, std::string effect);

    void use_power(human& user, human& used_on);

    int power_intensity(human& h);

}  // namespace troy
