#include <stack>
#include <string>
using namespace std;
class Solution { public: bool isValid(string s) { stack<char> q; for(char c:s){if(c=='('||c=='['||c=='{')q.push(c);else{if(q.empty())return false;char o=q.top();q.pop();if((c==')'&&o!='(')||(c==']'&&o!='[')||(c=='}'&&o!='{'))return false;}}return q.empty();} };
