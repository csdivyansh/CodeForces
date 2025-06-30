#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 1;
    string s = "";
    while(s.size() < n) {
        s += to_string(count);
        count++;
    }
    cout << s[n - 1] << endl;
    return 0;
}