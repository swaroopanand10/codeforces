#include<bits/stdc++.h>
#include <cmath>
#include <valarray>
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
  vector<vector<int>> vec(5);
  int x,y;
  for(auto i=0; i<5; i++){
    for (auto j=0; j<5; j++) {
      int a;
      cin>>a;
      vec[i].push_back(a);
      if (a==1) {
        x=i;
        y=j;
      }
    }
  }
  int row= abs(x-2); 
  int col= abs(y-2);
  cout<<row+col;
}


int main ()
{
  file();
  solve();
  return 0;
}


