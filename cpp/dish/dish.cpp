#include <bits/stdc++.h>
using namespace std;
int main(){
  ifstream inputFile("dishin.txt");
  ofstream outputFile("dishout.txt");
  int mx = INT_MIN, mn = INT_MAX, tot = 0;
  int n;
  inputFile >> n;
  for (int i = 0, a; i < n; i++){
     inputFile >> a;
     if (a < mn){
       mn = a;
     }
     if (a > mx){
       mx = a;
     }
     tot += a;
  }
  outputFile << mn << " " << mx << " " << tot / n ;
}
