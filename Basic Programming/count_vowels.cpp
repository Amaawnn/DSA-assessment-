#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() { string s; getline(cin,s); int count=0; for(unsigned char c:s) { char x=tolower(c); if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') ++count; } cout<<count<<'\n'; }
