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
  int n,k;
  cin>>n>>k;
  for (auto i=0; i<k; i++) {
  if(n%10!=0){
    n=n-1;

  }
  else{
    n=n/10;
  }
  }

  cout<<n;
}


int main ()
{
  file();
  solve();
  return 0;
}


