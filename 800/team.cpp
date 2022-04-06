#include <bit>
#include<bits/stdc++.h>
#include<string>
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
    int z=0;
  for (auto i=0; i<n; i++) {
    int a,b,c;
    cin>>a>>b>>c;
    int y=0;
    // string s;
    // s=a+b+c;
    // bitset<3> bit= stoi(s);
    // // cout<<s;
    // // stringstream ss;
    // // ss<<s;
    // // int bin;
    // // ss>>bin;
    // // cout<<bin;
    // int y= __builtin_popcount(bit);
    vector<int> vec;
    vec.push_back(a); 
    vec.push_back(b);
    vec.push_back(c);
    // cout<<vec[0]<<vec[1]<<vec[2]<<endl;
    y = count(vec.begin(), vec.end(), 1);
    // cout<<y<<endl;
    if (y>1) {
     z++; 
    }
        // cout<<z<<endl; 
  }
cout<<z;
  // cout<<"hello";

}

void solve2(){
  stringstream ss;
 string a="1";
 string b="0";
  string c=a+b;
  int x;
  ss<<c;
  ss>>x;
  cout<<c;
  cout<<x+1;
  int t= stoi(c);
}

int main ()
{
  file();
  solve();
  // solve2();
  return 0;
}


