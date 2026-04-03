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

class human{
    public:
        std::unique_ptr<artifact> possession = nullptr;
        std::shared_ptr<power> own_power = nullptr;
        std::shared_ptr<power> influenced_by = nullptr;    
};
    
void give_new_artifact(human &h, std::string &name_artefact);
void exchange_artifacts(std::unique_ptr<artifact> &possession1, std::unique_ptr<artifact> &possession2);
void manifest_power(human &h, std::string effect);
void use_power(human &h1, human &h2);
int power_intensity(human &h);
}  // namespace troy
