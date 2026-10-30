#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> orang = {"Budi", "Siti"};

    orang.insert(orang.begin(), "Roni");
    orang.push_back("Dewi");
    orang.erase(orang.begin());

    std::cout << "Hasil akhir: [";
    for (size_t i = 0; i < orang.size(); ++i) {
        std::cout << "'" << orang[i] << "'";
        if (i < orang.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
