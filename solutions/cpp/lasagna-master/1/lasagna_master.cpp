#include "lasagna_master.h"
using namespace std;
namespace lasagna_master {

    int preparationTime(vector<string> layers, int timeLayer){
        int layersNum = layers.size();
        int totalTime = layersNum * timeLayer;
        return totalTime;
    }

    amount quantities(vector<string> layers){
        amount c{0,0.0};
        for(const auto& l : layers){
            if(l == "noodles") c.noodles = c.noodles + 50;
            if(l == "sauce") c.sauce = c.sauce + 0.2;
        }
        return c;
    }

    void addSecretIngredient(vector<string> &myList, const vector<string> friendList){
        myList.back() = friendList.back();
    }

    void addSecretIngredient(vector<string> &myList, const string secretIngredient){
        myList.back() = secretIngredient;
    }

    vector<double> scaleRecipe(const vector<double> quantities, int layers){
        vector<double> qt;
        qt.reserve(quantities.size());
        for(const auto& q : quantities){
            qt.push_back(q * (layers/2.0));
        }
        return qt;
    }
    
}  
