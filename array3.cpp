#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tas = {"Pedang Kayu", "Perisai Besi"};
    
    tas.insert(tas.begin(), "Potion Darah");
    tas.insert(tas.begin() + 2, "Busur Panah");
    tas.pop_back();

    std::cout << "Hasil Akhir: [";
    for (size_t i = 0; i < tas.size(); ++i) {
        std::cout << "'" << tas[i] << "'";
        if (i < tas.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
