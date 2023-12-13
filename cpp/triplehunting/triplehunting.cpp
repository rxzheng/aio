#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main(){
    int bigness;
    cin >> bigness;
    string pos;
    int count;
    int arr[bigness];
    for(int i = 0, a; i < bigness; i++){
        cin >> a;
        if(a % 3 == 0){
            pos += to_string(i+1) + " ";
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
