#include <vector>
#include <queue>
#include <functional>
#include <limits>
using namespace std;
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times,int n,int k) {
        vector<vector<pair<int,int>>> graph(n+1);
        for(auto& edge:times)graph[edge[0]].push_back({edge[1],edge[2]});
        const int INF=numeric_limits<int>::max();
        vector<int> distance(n+1,INF);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        distance[k]=0;q.push({0,k});
        while(!q.empty()){
            auto [cost,node]=q.top();q.pop();
            if(cost!=distance[node])continue;
            for(auto [next,weight]:graph[node])if(cost+weight<distance[next]){distance[next]=cost+weight;q.push({distance[next],next});}
        }
        int answer=0;
        for(int node=1;node<=n;++node){if(distance[node]==INF)return -1;answer=max(answer,distance[node]);}
        return answer;
    }
};
