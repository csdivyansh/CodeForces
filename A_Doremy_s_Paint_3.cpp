#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main() {    
    int t;
    cin >> t;
    while(t--) {
        map<int, int> mpp;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mpp[x]++;
        }   
        if(mpp.size() >= 3) {
            cout << "No" << endl;
        } else {
            int freq1 = mpp.begin()->second;
            int freq2 = mpp.rbegin()->second;
            if(freq1 == freq2) 
                cout << "Yes" << endl;
            else if(n % 2 == 1 && abs(freq1 - freq2) == 1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
