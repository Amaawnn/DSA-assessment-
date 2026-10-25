#include <vector>
#include <queue>
#include <functional>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums,int k) {
        priority_queue<int,vector<int>,greater<int>> heap;
        for(int value:nums){heap.push(value);if(heap.size()>k)heap.pop();}
        return heap.top();
    }
};
