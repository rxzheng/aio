#include <iostream>
#include <algorithm>
#include <climits>
#include <fstream>

using namespace std;
int main(){
  //input and output files
  ifstream inputFile("rainin.txt");
  ofstream outputFile("rainout.txt");
  
  int days, capacity, total;
  total = 0;
  inputFile >> days >> capacity;

  for(int i = 0, a; i < days; i++){
    inputFile >> a;
    total = total + a;
    if(total >= capacity){
      outputFile << i + 1;
      break;
    }
  }

}
