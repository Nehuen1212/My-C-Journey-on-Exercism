#include <string>
#include <vector>
using namespace std;
namespace election {



struct ElectionResult {
    // Name of the candidate
    std::string name{};
    // Number of votes the candidate has
    int votes{};

    
     
};

int vote_count(ElectionResult obj){
        return obj.votes;
    }

void increment_vote_count(ElectionResult &obj, int votes){
    obj.votes += votes;
}

ElectionResult& determine_result(vector<ElectionResult> &fc){
    int max_votes = 0;
    int winner_index = 0;
    for(int i = 0; i < fc.size(); i++){
        if(fc[i].votes > max_votes) {
            max_votes = fc[i].votes;
            winner_index = i;
        }    
    
    }
    fc[winner_index].name = "President " + fc[winner_index].name;
    return fc[winner_index];
}

}  // namespace election
