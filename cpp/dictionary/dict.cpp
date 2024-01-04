#include <iostream>
#include <algorithm>
#include <climits>
#include <fstream>
#include <map>
using namespace std;
int main(){
  ifstream inputFile("dictin.txt");
  ofstream outputFile("dictout.txt");
  map<int, int> mp;
  int d, w;

  inputFile >> d >> w;

  for(int i = 0, a, b; i < d;i++){
    inputFile >> a >> b;
    mp[a] = b;
  }
  for(int i = 0, a; i < w; i++){
    inputFile >> a;
    if(mp.count(a)){
      outputFile << mp[a] << "\n";
    }
    else{
      outputFile << "C?" << "\n";
    }
  }
}
