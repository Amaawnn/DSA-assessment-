#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> frequency;
        for (int value : arr) ++frequency[value];
        unordered_set<int> counts;
        for (auto [value, count] : frequency) if (!counts.insert(count).second) return false;
        return true;
    }
};
