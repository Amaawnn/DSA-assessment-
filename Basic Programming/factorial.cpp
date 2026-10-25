#include <iostream>
using namespace std;
int main() { int n; cin>>n; unsigned long long r=1; for(int i=2;i<=n;++i) r*=i; cout<<r<<'\n'; }
