#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream inputFile("listin.txt");
    ofstream outputFile("listout.txt");

    int bigness;
    inputFile >> bigness;

    int arr[1001] = {0}; 

    for(int i = 0, a, b; i < bigness; i++){
        inputFile >> a;
        inputFile >> b;

        arr[a] += 1;
        arr[b] += 1;
    }

    int max = 0;

    for(int i = 0; i < 1001; i++){
        if (arr[i] > max) {
            max = i;
        }
    }

    outputFile << max;

    for (int i = 0; i < 1001; i++) {
        if (arr[i] == arr[max] && i != max) {
            outputFile << "\n" << i;
        }
    }

    return 0;
}

