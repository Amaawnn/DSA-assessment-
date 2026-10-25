#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int leastInterval(vector<char>& tasks,int n) {
        vector<int> frequency(26);
        for(char task:tasks)++frequency[task-'A'];
        int maximum=*max_element(frequency.begin(),frequency.end());
        int tied=count(frequency.begin(),frequency.end(),maximum);
        return max(static_cast<int>(tasks.size()),(maximum-1)*(n+1)+tied);
    }
};
