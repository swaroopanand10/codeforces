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
  int x=0;
  cin>>n;
  for (auto i=0; i<n; i++) {
  string a;
    cin>>a;
    if (a=="X++"|a=="++X") {
      ++x;
    }
    if(a=="--X"|a=="X--"){
      --x;
    }
  }
  cout<<x;


}


int main ()
{
  file();
  solve();
  return 0;
}


