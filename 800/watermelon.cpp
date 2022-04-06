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
int w;
cin>>w;
  if(w>2 && (w^1)==(w+1))
   cout<<"YES";
  else
   cout<<"NO";
}


int main ()
{
  file();
  solve();
  return 0;
}


