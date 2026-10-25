#include <string>
#include <array>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        array<int, 128> frequency{};
        for (unsigned char ch : s) ++frequency[ch];
        int length = 0;
        bool hasCenter = false;
        for (int count : frequency) { length += count / 2 * 2; if (count % 2) hasCenter = true; }
        return length + hasCenter;
    }
};
