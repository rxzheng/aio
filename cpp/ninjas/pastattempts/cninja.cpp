#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ifstream inputFile("ninjain.txt");
    ofstream outputFile("ninjaout.txt");

    int a, b, n, k;
    inputFile >> n >> k;

    // Calculate the number of ninjas caught
    a = k * floor(static_cast<double>(n) / (k + 1));
    b = (n % (k + 1)) - 1;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // Calculate the number of ninjas who sneak past
    int ninjasSneakPast = n - a - b;

    if (k == 0) {
        outputFile << 0;
    } else {
        outputFile << ninjasSneakPast;
    }

    return 0;
}

