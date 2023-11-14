#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_set>

// Function to split a string into tokens based on a delimiter
std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::istringstream iss(str);
    std::string token;
    while (std::getline(iss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

// Function to split the CSV file based on unique values
void splitCSVByUniqueValues(const std::string& inputFile, int columnToSplit) {
    std::ifstream file(inputFile);
    if (!file) {
        std::cerr << "Failed to open the input file." << std::endl;
        return;
    }

    std::vector<std::string> lines;
    std::string line;
    while (std::getline(file, line)) {
        lines.push_back(line);
    }
    file.close();

    std::unordered_set<std::string> uniqueValues;
    for (const std::string& line : lines) {
        std::vector<std::string> tokens = splitString(line, ',');
        if (columnToSplit < tokens.size()) {
            uniqueValues.insert(tokens[columnToSplit]);
        }
    }



  /*  for (const std::string& value : uniqueValues) {
        std::string outputFileName = "output_" + value + ".csv";
        std::ofstream outputFile(outputFileName);
        if (!outputFile) {
            std::cerr << "Failed to create the output file: " << outputFileName << std::endl;
            continue;
        }

        for (const std::string& line : lines) {
            std::vector<std::string> tokens = splitString(line, ',');
            if (columnToSplit < tokens.size() && tokens[columnToSplit] == value) {
                outputFile << line << std::endl;
            }
        }

        outputFile.close();
        std::cout << "Split completed. Output file: " << outputFileName << std::endl;
    }*/
}

int main() {
    std::string inputFile = "input.csv";
    int columnToSplit = 0;  // Assuming the first column is the one to split by
    splitCSVByUniqueValues(inputFile, columnToSplit);

    return 0;
}