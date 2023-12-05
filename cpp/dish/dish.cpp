#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
  int mx = INT_MIN, mn = INT_MAX, tot = 0;
  int n;
  cin >> n;
  for (int i = 0, a; i < n; i++){
     cin >> a;
     if (a < mn){
       mn = a;
     }
     if (a > mx){
       mx = a;
     }
     tot += a;
  }
  cout << mn << " " << mx << " " << tot/n;
}