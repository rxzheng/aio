#include <bits/stdc++.h>
using namespace std;
int main(){
  ifstream inputFile("encyin.txt");
  ofstream outputFile("encyout.txt");
  
  int pages, questions;
  map<int, int> mp;
  
  inputFile >> pages >> questions;
  for(int i = 1, a; i < pages + 1; i++){
    inputFile >> a;
    mp[i] = a;
  }
  for(int i = 0, a; i < questions; i++){
    inputFile >> a;
    outputFile << mp[a] << "\n";
  }
}
