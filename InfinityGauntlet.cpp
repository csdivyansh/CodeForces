#include<iostream>
using namespace std;
int main()
{
    pair<string, string> p;
    int n, ans;
    cin >> n;
    ans = 6 - n;
    cout << ans << endl;
    int purple = 0;
    int green = 0;
    int blue = 0;
    int orange = 0;
    int red = 0;
    int yellow = 0;
    while(n--) {
        string s;
        cin >> s;
        if(s == "purple") purple++;
        else if(s == "green") green++;
        else if(s == "blue") blue++;
        else if(s == "orange") orange++;
        else if(s == "red") red++;
        else if(s == "yellow") yellow++;
    }
    if(purple == 0) cout << "Power" << endl;
    if(green == 0) cout << "Time" << endl;
    if(blue == 0) cout << "Space" << endl;
    if(orange == 0) cout << "Soul" << endl;
    if(red == 0) cout << "Reality" << endl;
    if(yellow == 0) cout << "Mind" << endl;
    return 0;
}