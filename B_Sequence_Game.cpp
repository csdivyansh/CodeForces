#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        vector<int> a;
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        a.push_back(b[0]);
        for(int i = 1; i < n; i++) {
            if(b[i - 1] <= b[i]) {
                a.push_back(b[i]);
            } else {
                a.push_back(b[i]);
                a.push_back(b[i]);
            }
        }

        cout << a.size() << endl;
        for(int i : a) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
