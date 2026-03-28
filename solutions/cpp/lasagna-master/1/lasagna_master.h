#pragma once
#include <vector>
#include <string>
using namespace std;
namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(vector<string> layers, int timeLayer = 2);
amount quantities(vector<string> layers);

void addSecretIngredient(vector<string> &myList, const vector<string> friendList);
void addSecretIngredient(vector<string> &myList, const string secretIngredient);

vector<double> scaleRecipe(const vector<double> quantities, int layers);


}  // namespace lasagna_master
