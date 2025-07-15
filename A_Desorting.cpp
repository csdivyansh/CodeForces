#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isSorted(vector<long long>& arr) {
    bool flag = 1;
    for(int i = 1; i < arr.size(); i++) {
        if(arr[i - 1] > arr[i]) {
            flag = 0;
            break;
        }
    }
    return flag;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if(!isSorted(arr) || arr[n - 2] > arr[n - 1]) {
            cout << 0 << endl;
        } else {
            if(arr[n - 2] == arr[n - 1]) {
                cout << 1 << endl;
            } else {
                cout << (long long)(ceil((float)(arr[n - 1] - arr[n - 2]) / 2)) << endl;
            }
        }

    }
    return 0;
}
