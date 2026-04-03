#include <string>
using namespace std;
namespace log_line {
std::string message(std::string line) {
    int pos = line.find(":");
    string m = line.substr(pos+2);
    return m;
}

std::string log_level(std::string line) {
    int pos = line.find("]");
    string Ll = line.substr(1,pos - 1);
    return Ll;
    
}

std::string reformat(std::string line) {
    string message = line.substr(line.find(":") + 2);
    int pos = line.find("]");
    string level = line.substr(1, pos - 1);
    string rf =  message + " ("+ level + ")";
    return rf;
}  // namespace log_line
}
