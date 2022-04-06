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
int a,b;
  int count=0;
  cin>>a>>b;
  while (!(a>b)) {
    a=a*3;
    b=b*2;
    count++;

  }
 cout<<count;

}


int main ()
{
  file();
  solve();
  return 0;
}


