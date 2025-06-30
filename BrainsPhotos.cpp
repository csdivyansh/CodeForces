#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> m >> n;
    bool isColored = false;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            char ch;
            cin >> ch;
            if(ch == 'C' || ch == 'M' || ch == 'Y') {
                isColored = true;
            }
        }
    }
    cout << (isColored ? "#Color" : "#Black&White") << endl;
    return 0;
}