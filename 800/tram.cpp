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
  cin>>n;
  int a,b;
  int total;
  vector<int> cap;
  for (auto i=0; i<n; i++) {
    cin>>a>>b;
    total=total-a+b; 
    cap.push_back(total);
  }
  int m= *max_element(cap.begin(), cap.end());
cout<<m;
}


int main ()
{
  file();
  solve();
  return 0;
}


