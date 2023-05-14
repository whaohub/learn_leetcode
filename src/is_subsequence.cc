#include <string>

// string s: [a, b, c] slow:^
// string t: [a, h, b, g, d , c] fast:*

//[a, b, c]                 [a, b, c]                 [a, b, c]
//[a, h, b, g, d , c]       [a, h, b, g, d , c]       [a, h, b, g, d , c]
// ^                 ^==*       ^               ^!=*      ^
// *                            *                            *

class Solution {
 public:
  bool isSubsequence(std::string s, std::string t) {
    std::size_t substr_pos = 0;
    std::size_t oristr_pos = 0;

    while (substr_pos < s.size() && oristr_pos < t.size()) {
      if (s[substr_pos] == t[oristr_pos]) {  //^==*
        substr_pos++;
      }
      oristr_pos++;  //^!=*
    }

    return substr_pos == s.size();
  }
};