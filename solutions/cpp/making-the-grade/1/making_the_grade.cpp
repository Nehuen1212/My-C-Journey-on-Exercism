#include <array>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    vector<int> scores_int;
    for(auto score : student_scores){
        scores_int.push_back(static_cast<int>(score));
    }
    
    return scores_int;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int count = 0;
    for(auto score : student_scores){
        if(score <= 40)count++;
    }
    return count;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int failling_score = 41;
    int interval = round((highest_score - failling_score) / 4.0);
    array<int,4> values;
    values[0] = failling_score;
    for(int i = 1; i < 4; i++){
        values[i] = values[i-1] + interval;
    }
    return values;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    vector<string> ranking(student_names.size());
    for(int i = 0; i < student_names.size(); i++){
        ranking[i] = to_string(i+1) + ". " + student_names[i] + ": " + to_string(student_scores[i]);
    }
    return ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    
    for(int i = 0; i < student_names.size(); i++){
        if(student_scores[i] == 100) return student_names[i];
    }
    return "";
}
