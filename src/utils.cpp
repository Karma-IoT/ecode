#include "utils.h"

namespace chepp {

vector<string> split(const string &express, const string &sep) {
    auto sem0 = 0;
    auto sem1 = express.find_first_of(sep,sem0);
    vector<string> exp;
    while (sem1 != string::npos) {
        exp.push_back(express.substr(sem0,sem1 - sem0));
        sem0 = sem1 + 1;
        sem1 = express.find_first_of(sep,sem0);
    }
    if (sem1 - sem0 > 0) {
        exp.push_back(express.substr(sem0,sem1 - sem0));
    }
    return exp;
}

string& trim(string &s) {
    if (s.empty()) {
        return s;
    }

    s.erase(0,s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}

}