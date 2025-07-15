#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int mx = *max_element(arr.begin(), arr.end());
        for(int i = 0; i < n; i++) {
            if(arr[i]!=mx) {
                b.push_back(arr[i]);
            } else {
                c.push_back(arr[i]);
            }
        }
        if(b.empty()){
            cout << -1 << endl;
        } else {
            cout << b.size() << " " << c.size() << endl;
            for(auto i : b) {
                cout << i << " ";
            }
            cout << endl;
            for(auto i : c) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
