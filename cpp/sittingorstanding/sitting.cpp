#include <iostream>
int main() {
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    int dimensions = x * y;
    int npcs;
    int a;
    int b;
    std::cin >> npcs;
    if (npcs <= dimensions){
        a = npcs;
        b = 0;
    }
    else{
        a = dimensions;
        b = npcs - dimensions;
    }
    std::cout << a << " " << b;
}