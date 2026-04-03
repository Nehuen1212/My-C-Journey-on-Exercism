#include "doctor_data.h"

bool heaven::in_the_same_system(Vessel obj1, Vessel obj2){
    if(obj1.current_system == obj2.current_system){
        return true;
    }
    return false;
}

string heaven::get_older_bob(Vessel obj1, Vessel obj2){
    if(obj1.old < obj2.old){
        return obj1.name;
    }
    return obj2.name;
}