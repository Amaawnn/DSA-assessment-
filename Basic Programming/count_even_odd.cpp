#include <iostream>
using namespace std;
int main() { int n, even=0, odd=0; cin>>n; for(int i=0,x;i<n;++i) { cin>>x; if(x%2==0) ++even; else ++odd; } cout<<even<<' '<<odd<<'\n'; }
