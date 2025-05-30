#include <string>
#include <cctype>
std::string to_camel_case(std::string text) {
    std::string result;
    for (std::size_t i = 0; i < text.length(); i++) {  
        if (text[i] == '-' || text[i] == '_'){
          if(i + 1 < text.length() && isupper(text[i + 1])) continue;
          else {
            result.push_back(toupper(text[i + 1]));
            i++;
          }
        }
        else {
            result.push_back(text[i]);
        }
    }
    return result;
}
