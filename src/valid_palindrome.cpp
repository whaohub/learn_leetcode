#include <cctype>
#include <string>

class Solution {
 public:
  bool isPalindrome(std::string s) {
    std::string str;

    for (const auto& c : s) {
      if (isalnum(c)) str += std::tolower(c);  // find char && to lowercase
    }
		
    // ctor reverse str
    std::string rev_str(str.rbegin(), str.rend());

    return str == rev_str;
  }
};
