#include <iostream>
#include <algorithm>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
 ifstream inputFile("ninjain.txt");
 ofstream outputFile("ninjaout.txt");
  
 int a, b, n, k;
 inputFile >> n;
 inputFile >> k;
 
 a = k * (n / (k + 1));
 b = (n % (k+1)) - 1;
  cout << "a: " << a;
  cout << "b: " << b;
if(k == 0){
  outputFile << 0;
}else{
 outputFile << a + b;
}
}
