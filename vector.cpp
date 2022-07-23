#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> arr;
    int n;
    cin >> n;
    int value;
    for(int i=0; i<n; i++){
        cin >> value;
        arr.push_back(value);
    }
    sort(arr.begin(), arr.end());
    for(int value: arr){
        cout << value << " ";
    }
    return 0;
}
