#include <string>
#include <array>
#include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        array<int, 256> lastSeen;
        lastSeen.fill(-1);
        int start = 0, longest = 0;
        for (int i = 0; i < s.size(); ++i) {
            unsigned char ch = s[i];
            start = max(start, lastSeen[ch] + 1);
            lastSeen[ch] = i;
            longest = max(longest, i - start + 1);
        }
        return longest;
    }
};
