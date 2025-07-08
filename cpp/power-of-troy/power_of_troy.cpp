#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& h, std::string name) {
        artifact art{name};
        h.possession = std::make_unique<artifact>(art);
    }

    void exchange_artifacts(std::unique_ptr<artifact>& art1, std::unique_ptr<artifact>& art2) {
        if (art1 && art2) {
            std::string temp = art1->name;
            art1->name = art2->name;
            art2->name = temp;
        }
        else if (art1) {
            art2 = std::make_unique<artifact>(art1->name);
            art1 = nullptr;
        } else if (art2) {
            art1 = std::make_unique<artifact>(art2->name);
            art2 = nullptr;
        }
    }


    void manifest_power(human& h, std::string effect) {
        h.own_power = std::make_shared<power>(effect);
    }

    void use_power(human& user, human& used_on) {
        used_on.influenced_by = user.own_power;
    }

    int power_intensity(human& h) {
        if (!h.own_power) return 0;
        return h.own_power.use_count();
    }

}  // namespace troy
