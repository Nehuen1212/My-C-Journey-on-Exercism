#include <iostream>
using namespace std;

namespace star_map{
  enum class System{
    Sol,
    BetaHydri,
    EpsilonEridani,
    AlphaCentauri,
    DeltaEridani,
    Omicron2Eridani
  };
};

namespace heaven{
    
class Vessel{
public:
    string name;
    int old;
    star_map::System current_system = star_map::System::Sol;
    int generation = 1;
    int busters = 0;
    
    Vessel replicate(string newName){
        Vessel newObj{newName, old, current_system, generation + 1};
        return newObj;
    }

    void make_buster(){
        busters++;
    }

    bool shoot_buster(){
        if(busters > 0){
            busters = busters - 1;
            return true;
        }
        return false;
        
    }
};

string get_older_bob(Vessel obj1, Vessel obj2);
bool in_the_same_system(Vessel obj1, Vessel obj2);
};
