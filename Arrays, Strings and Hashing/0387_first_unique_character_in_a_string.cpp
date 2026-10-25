#include <string>
#include <array>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        array<int, 26> frequency{};
        for (char ch : s) ++frequency[ch - 'a'];
        for (int i = 0; i < s.size(); ++i) if (frequency[s[i] - 'a'] == 1) return i;
        return -1;
    }
};
