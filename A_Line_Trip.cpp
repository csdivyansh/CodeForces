#include<iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        int maxx = 0;
        vector<int> map(x + 1);
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            map[x] = 1;
        }

        int count = 0;
        for(int i = 1; i <= x; i++) {
            count++;
            if(map[i] == 1) {
                maxx = max(maxx, count);
                count = 0;
            }    
        }
        maxx = max((count) * 2, maxx);
        cout << maxx << endl;
    }
    return 0;
}
