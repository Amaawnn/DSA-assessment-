#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() { string s; getline(cin,s); for(char &c:s) c=static_cast<char>(toupper(static_cast<unsigned char>(c))); cout<<s<<'\n'; }
