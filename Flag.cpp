#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool flag = 1;
    int outer;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(i == 0) {
            outer = s[0];
        } else if(s[0] == outer) {
            flag = 0;
        }
        outer = s[0];
        for(int j = 0; j < s.size() - 1; j++) {
            if(s[j] != s[j + 1]) {
                flag = 0;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}