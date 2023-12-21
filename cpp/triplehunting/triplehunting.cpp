#include <iostream>
#include <algorithm>
#include <climits>
#include <fstream>
using namespace std;
int main(){
    ifstream inputFile("tripin.txt");
    ofstream outputFile("tripout.txt");
    int bigness;
    inputFile >> bigness;
    string pos;
    int count;
    int arr[bigness];
    for(int i = 0, a; i < bigness; i++){
        inputFile >> a;
        if(a % 3 == 0){
            pos += to_string(i+1) + " ";
            count++;
        }
    }
    if(count != 0){
        outputFile << count << "\n" << pos;
    }
    else{
        outputFile << "Nothing here!";
    }
    
}
