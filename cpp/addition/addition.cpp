#include <iostream>
#include <algorithm>
#include <climits>
#include <fstream>
using namespace std;
int main(){
   // input and output files
   ifstream inputFile("addin.txt");
   ofstream outputFile("addout.txt");
  
   //declare variables
   int a, b, sum;
  
   //read values
   inputFile >>  a >> b;
   
   sum = a + b;
   outputFile << sum;
}
   
   
