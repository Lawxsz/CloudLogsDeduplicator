#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_set>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

int main() {
    std::string directory = "cloud";
    std::unordered_set<std::string> unique_lines;
    std::ofstream output_file("Binded_Texts.txt");

    if (!output_file.is_open()) {
        std::cerr << "Could not create the file Binded_Texts.txt" << std::endl;
        return 1;
    }

    for (const auto& entry : fs::directory_iterator(directory)) {
        if (entry.path().extension() == ".txt") {
            std::ifstream input_file(entry.path());
            if (!input_file.is_open()) {
                std::cerr << "Could not open the file: " << entry.path() << std::endl;
                continue;
            }

            std::string line;
            while (std::getline(input_file, line)) {
                unique_lines.insert(line);
            }

            input_file.close();
        }
    }

    int line_count = 0;

    for (const auto& unique_line : unique_lines) {
        output_file << unique_line << std::endl;
        line_count++;
    }

    output_file.close();
    std::cout << "Process completed. Lines have been saved to Binded_Texts.txt." << std::endl;
    std::cout << "Total number of lines in Binded_Texts.txt: " << line_count << std::endl;

    // @lawxsz telegram github.com/lawxsz
    return 0;
}
