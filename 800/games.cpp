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
  vector<pair<int ,int >> p;
  int count=0;
  for (auto i=0; i<n; i++) {
    int a,b;
    cin>>a>>b;
  p.push_back(make_pair(a,b));

  }
  for (auto i=0; i<n; i++) {
  for (auto j=0; j<n; j++) {
    if(p[i].first==p[j].second){
        count++;
      } 
  }
  }
  // cout<<"hello";
cout<<count;
}


int main ()
{
  file();
  solve();
  // cout<<"hello";
  return 0;
}


