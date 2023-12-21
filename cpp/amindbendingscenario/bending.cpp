#include <bits/stdc++.h>
using namespace std;
int main() {
  ifstream inputFile("bendin.txt");
  ofstream outputFile("bendout.txt");
  int x1, y1, x2, y2, a1, b1, a2, b2;
  int x, y;
  inputFile >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;


//calculations
  if(x2 > a1){
    x = max(x2, a1) - min(x2, a1);
  }
  else if(a2 > x1){
    x = max(a2, x1) - min(a2,x1);
  }
  else{
    x = 0;
  }
  if(y2 > b1){
    y = max(y2, b1) - min(y2, b1);
  }
  else if(b2 > y1){
    y = max(b2, y1) - min(b2, y1);
  }
  else{
    y = 0;
  }

  int area;
  int garea;
  garea = (x2 - x1) * (y2 - y1) + (a2 - a1) * (b2 - b1);
  area = garea - (x * y);
  outputFile << area;
  

  cout << x << " " << y << " " << garea << " " << area;
}
