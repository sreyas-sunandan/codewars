#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s)
{
    std::vector<std::string> spair;
    for (size_t i = 0; i < s.size(); i += 2) {
        if (i == s.size() - 1) {
            // If there's an odd number of characters, append the last character followed by '_'
            spair.push_back(std::string(1, s[i]) + '_');
        } else {
            // Append the two-character pair
            spair.push_back(s.substr(i, 2));
        }
    }
    return spair;
}
