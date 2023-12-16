#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //input and output files
  ifstream inputFile("sitin.txt");
  ofstream outputFile("sitout.txt");
    int x;
    int y;
    inputFile >> x;
   inputFile >> y;
    int dimensions = x * y;
    int npcs;
    int a;
    int b;
    inputFile >> npcs;
    if (npcs <= dimensions){
        a = npcs;
        b = 0;
    }
    else{
        a = dimensions;
        b = npcs - dimensions;
    }
   outputFile << a << " " << b;
}
