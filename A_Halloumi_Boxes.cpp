#include<iostream>
using namespace std;
bool isSorted(int *arr, int n) {
    bool flag = true;
    for(int i = 1; i < n; i++) {
        if(arr[i - 1] > arr[i]) {
            flag = false;
            break;
        }
    }
    return flag;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        } 
        if(isSorted(arr, n) || k > 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
