#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n > 0) {
        int rem = n % 10;
        if(rem == 4 || rem == 7) {
            count++;
        }
        n /= 10;
    }
    cout << count << endl;
    cout << ((count == 4 || count == 7) ? "YES" : "NO") << endl;
    return 0;
}