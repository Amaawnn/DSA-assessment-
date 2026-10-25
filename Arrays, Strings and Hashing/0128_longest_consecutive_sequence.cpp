#include <vector>
#include <unordered_set>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> values(nums.begin(), nums.end());
        int longest = 0;
        for (int value : values) {
            if (value != INT_MIN && values.count(value - 1)) continue;
            int length = 1;
            long long next = static_cast<long long>(value) + 1;
            while (next <= INT_MAX && values.count(static_cast<int>(next))) { ++length; ++next; }
            longest = max(longest, length);
        }
        return longest;
    }
};