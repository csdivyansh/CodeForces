#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int lastOdd = 0;
    int lastEven = 0;
    int countE = 0;
    int countO = 0;
    int arr[n];
    for(int i = 0; i < n; i++) {
       cin >> arr[i];
       if(arr[i] % 2 == 0) {
        countE++;
        lastEven = arr[i];
       } else {
        countO++;
        lastOdd = arr[i];
       }
    }
    int find = 0;
    if(countO > countE) {
        find = lastEven;
    } else {
        find = lastOdd;
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] == find) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}