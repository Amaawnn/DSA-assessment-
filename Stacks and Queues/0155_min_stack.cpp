#include <stack>
#include <algorithm>
#include <utility>
using namespace std;
class MinStack { stack<pair<int,int>> s; public: void push(int v){s.push({v,s.empty()?v:min(v,s.top().second)});} void pop(){s.pop();} int top(){return s.top().first;} int getMin(){return s.top().second;} };
