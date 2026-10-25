#include <iostream>
using namespace std;
int main() { int n; cin>>n; unsigned long long a=0,b=1; for(int i=0;i<n;++i) { auto c=a+b; a=b; b=c; } cout<<a<<'\n'; }
