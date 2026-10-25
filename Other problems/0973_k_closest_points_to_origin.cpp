#include <vector>
#include <queue>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points,int k) {
        priority_queue<pair<long long,int>> heap;
        for(int i=0;i<points.size();++i){long long x=points[i][0],y=points[i][1];heap.push({x*x+y*y,i});if(heap.size()>k)heap.pop();}
        vector<vector<int>> result;
        while(!heap.empty()){result.push_back(points[heap.top().second]);heap.pop();}
        return result;
    }
};
