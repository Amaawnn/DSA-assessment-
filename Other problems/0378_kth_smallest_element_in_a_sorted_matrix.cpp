#include <vector>
#include <queue>
#include <functional>
#include <tuple>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix,int k) {
        using Entry=tuple<int,int,int>;
        priority_queue<Entry,vector<Entry>,greater<Entry>> heap;
        for(int row=0;row<matrix.size();++row)heap.push({matrix[row][0],row,0});
        while(--k){auto [value,row,col]=heap.top();heap.pop();if(col+1<matrix[row].size())heap.push({matrix[row][col+1],row,col+1});}
        return get<0>(heap.top());
    }
};
