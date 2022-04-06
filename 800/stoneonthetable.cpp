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
  int n;
  int count=0;
  cin>>n;
  string a;
  cin>>a;
  for (auto i=0; i<n-1; i++) {
   if (a[i]==a[i+1]) {
    count++;
   } 
  }
  
    cout<<count;

}


int main ()
{
  file();
  solve();
  return 0;
}


