#include <fstream>
#include <iostream>

#include "replace.hpp"

Replace::Replace(const std::string filename, const std::string s1, const std::string s2)
	: _filename(filename), _s1(s1), _s2(s2) {}

std::string Replace::replaceAll(const std::string& input, const std::string& s1, const std::string& s2) {
    if (s1.empty())
        return input;

    std::string result;
    size_t pos = 0;
    size_t found = input.find(s1, pos);

    while (found != std::string::npos) {
        result.append(input, pos, found - pos);
        result += s2;
        pos = found + s1.length();
        found = input.find(s1, pos);
    }

    result.append(input, pos, input.size() - pos);
    return result;
}

bool Replace::process() {
    if (_s1.empty()) {
        std::cerr << "Error: s1 (string to replace) must not be empty." << std::endl;
        return false;
    }

    std::string in_filepath = std::string("files/") + _filename;
    std::ifstream infile(in_filepath.c_str());
    if (!infile) {
        std::cerr << "Error: Could not open file '" << in_filepath << "' for reading." << std::endl;
        return false;
    }

    std::string content;
    std::string line;
    while (std::getline(infile, line)) { content += line + '\n'; }
    infile.close();

    std::string replaced_content = replaceAll(content, _s1, _s2);

    std::string out_filepath = std::string("files/") + _filename + ".replace";
    std::ofstream outfile(out_filepath.c_str());
    if (!outfile) {
        std::cerr << "Error: Could not open file '" << out_filepath << "' for writing." << std::endl;
        return false;
    }

    outfile << replaced_content;
    outfile.close();

    return true;
}

Replace::~Replace() {}
