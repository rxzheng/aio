#include <iostream>
#include <algorithm>
#include <climits>
#include <fstream>

using namespace std;

int main(){
    ifstream inputFile("fashin.txt");
    ofstream outputFile("fashout.txt");

    int money, count;
    count = 0;
    inputFile >> money;
    while(money > 0){
        if(money >= 100){
        count += 1;
        money -= 100;
    }
    
    else if(money>= 20){
        count += 1;
        money -= 20;
    }
    
    else if(money >= 5){
        count += 1;
        money -= 5;
    }
    else if(money >= 1){
        count += 1;
        money -= 1;
    }
    
    }
    outputFile << count;
    }
