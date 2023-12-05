#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    cin >> n;
    str pos;
    int count;
    int arr[n];
    for(int i = 0, a; i < n; i++){
        cin >> a;
        if(a % 3 == 0){
            pos += i << " ";
            count++;
        }
    }
    if(count != 0){
        cout << count << "\n" << pos;
    }
    else{
        cout << "Nothing here!";
    }
    
}