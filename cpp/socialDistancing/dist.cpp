#include <iostream>
#include <algorithm>
#include <climits>
#include <fstream>

using namespace std;
int main(){
    ifstream inputFile("dist.txt");
    ofstream outputFile("distout.txt");

    int n, k, counter;
    counter = 0;

    inputFile >> n >> k;

    int temp1, temp2, diff;

    for(int i = 0; i < n; i++){
        inputFile >> temp1;
        inputFile >> temp2;
        if(temp1 >= temp2){
            diff = temp1 - temp2;
        }
        else if (temp2 > temp1){
            diff = temp2 - temp1;
        }
        if(diff > k){
            counter += 1;
        }

    }

}