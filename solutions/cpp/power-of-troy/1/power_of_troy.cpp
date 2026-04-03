#include "power_of_troy.h"
using namespace std;
namespace troy {


void give_new_artifact(human &h, string &name_artefact){
    h.possession = make_unique<artifact>(name_artefact);
        
}

void exchange_artifacts(unique_ptr<artifact> &possession1, unique_ptr<artifact> &possession2){
    swap(possession1, possession2);
}

void manifest_power(human &h, string effect){
    h.own_power = make_shared<power>(effect);
}

void use_power(human &h1, human &h2){
    h2.influenced_by = h1.own_power;
}

int power_intensity(human &h){
    return (h.own_power != nullptr) ? h.own_power.use_count() : 0;
    
}

    
}  // namespace troy
