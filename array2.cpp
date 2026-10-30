#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> 
    daftarLagu = {"Ini Abadi", "Monokrom"};

    daftarLagu.insert(daftarLagu.begin() + 1, "everything u are");
    daftarLagu.push_back("Aitakatta");
    daftarLagu.erase(daftarLagu.begin());

    std::cout << "Hasil akhir: [";
    for (size_t i = 0; i < daftarLagu.size(); ++i) {
        std::cout << "'" << daftarLagu[i] << "'";
        if (i < daftarLagu.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
