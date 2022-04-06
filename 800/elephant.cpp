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
int x;
  cin>>x;
  if(x%5!=0){
    cout<<x/5+1;
    return;
  }
 cout<<x/5;

}


int main ()
{
  file();
  solve();
  return 0;
}


