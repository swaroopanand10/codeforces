#include<bits/stdc++.h>
#include <vector>
using namespace std;

void file(){
  #ifndef online_judge
  // for getting input from input.txt file
  freopen("in.txt", "r", stdin);
  // printing the output to output.txt file
  freopen("out.txt", "w", stdout);
#endif
}


void solve(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  // string s=a+b+c+d;
  vector<int> vec{a,b,c,d};
  set<int> set(vec.begin(), vec.end());
  int z = set.size();
  cout<<4-z;


}


int main ()
{
  file();
  solve();
  return 0;
}


