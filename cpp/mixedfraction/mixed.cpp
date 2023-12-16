#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
  ifstream inputFile("mixin.txt");
  ofstream outputFile("mixout.txt");
  
  int a, b, x, y;
  inputFile >> a >> b;
  
  if(a % b == 0){
    x = a / b;
    outputFile << x;
  }
  else{
    x = floor(a / b);
    y = a % b;

      outputFile << x << " " << y << "/" << b;
  }

}
