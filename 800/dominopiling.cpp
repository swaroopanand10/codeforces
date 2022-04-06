//this is solved by the help of tutorial(of without code)
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
int m,n;
  cin>>m>>n;
  int out;
if ((n^1)==(n+1)) {
   out= (n/2)*m;
    cout<<out;
}
else {
    out=(m/2)+((n/2)*m); 
   // int b =(m/2) ;
   // int a= ((n/2)*m);
   //  out=a+b;
    cout<<out;
}
// cout<<out;
}


int main ()
{
  file();
  solve();
  return 0;
}


