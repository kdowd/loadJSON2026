#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"

using namespace std;
using json = nlohmann::json;

class LoadJSON {
    public:
    LoadJSON(const string& json_file_path) {
        // see video for advice on loading the JSON
    }
};

int main() {
    LoadJSON theData("../data.json");
    return 0;
}
