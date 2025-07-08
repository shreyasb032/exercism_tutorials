#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

using Layers = std::vector<std::string>;

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const Layers& layers, int average_prep_time = 2);

amount quantities(const Layers& layers);

void addSecretIngredient(Layers& my_layers, const Layers& friends_layers);

std::vector<double> scaleRecipe(const std::vector<double>& quantities, int num_portions);

void addSecretIngredient(Layers& my_layers, std::string secret_ingredient);

}  // namespace lasagna_master
