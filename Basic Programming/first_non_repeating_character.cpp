#include <iostream>
#include <string>
#include <array>
using namespace std;
int main() { string s; getline(cin,s); array<int,256> f{}; for(unsigned char c:s) ++f[c]; for(unsigned char c:s) if(f[c]==1) { cout<<char(c)<<'\n'; return 0; } cout<<-1<<'\n'; }
