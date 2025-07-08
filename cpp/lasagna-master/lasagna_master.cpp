#include "lasagna_master.h"

namespace lasagna_master {

// TODO: add your solution here
    int preparationTime(const Layers& layers, int average_per_layer) {
        return layers.size() * average_per_layer;
    }

    amount quantities(const Layers& layers) {
        amount req{0, 0.0};
        for (const std::string& layer : layers) {
            if (layer == "noodles") {
                req.noodles += 50;
            } else if (layer == "sauce") {
                req.sauce += 0.2;
            }
        }
        return req;
    }

    void addSecretIngredient(Layers& my_layers, const Layers& friends_layers) {
        my_layers.pop_back();
        my_layers.emplace_back(friends_layers.back());
    }

    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int num_portions) {
        std::vector<double> scaled_quantities;
        for (double quantity : quantities) {
            scaled_quantities.emplace_back(quantity / 2 * num_portions);
        }
        return scaled_quantities;
    }

    void addSecretIngredient(Layers& my_layers, std::string secret_ingredient) {
        my_layers.pop_back();
        my_layers.emplace_back(secret_ingredient);
    }

}  // namespace lasagna_master
