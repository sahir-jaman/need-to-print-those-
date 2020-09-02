#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        string p(n, s[n-1]);
        cout<<p<<endl;
    }

    return 0;
}
