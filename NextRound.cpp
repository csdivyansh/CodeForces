#include<iostream>
using namespace std;
int main() {
    int n, k, x, count = 0, ans;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(i == k - 1) {
            ans = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] >= ans && arr[i] > 0) {
            count++;
        }
    }
    cout << count;
    return 0;
}
