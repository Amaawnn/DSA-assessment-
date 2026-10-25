#include <vector>
#include <unordered_map>
#include <queue>
#include <utility>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums,int k) {
        unordered_map<int,int> frequency;
        for(int value:nums)++frequency[value];
        priority_queue<pair<int,int>> heap;
        for(auto [value,count]:frequency)heap.push({count,value});
        vector<int> result;
        while(k--){result.push_back(heap.top().second);heap.pop();}
        return result;
    }
};
