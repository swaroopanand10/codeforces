#include <algorithm>
#include<bits/stdc++.h>
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
string a;
  cin>>a;
  string b;
  for (auto i=0; i<a.size(); i=i+2) {
    b = b+a[i]; 
  }
     sort(b.begin(), b.end()); 
  // cout<<b<<endl;
  int d=0;
  for (auto i=0; i<a.size(); i=i+2) {
    a[i]=b[i-d];
    d++; 
  }
cout<<a;

}


int main ()
{
  file();
  solve();
  return 0;
}


