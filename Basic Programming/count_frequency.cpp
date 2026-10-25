#include <iostream>
#include <vector>
using namespace std;
int main() { int n, target, count=0; cin >> n; vector<int> a(n); for(int &x:a) cin>>x; cin>>target; for(int x:a) count += x==target; cout<<count<<'\n'; }
