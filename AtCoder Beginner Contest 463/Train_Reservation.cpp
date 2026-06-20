//-----------राधा-----------//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    char c;
    cin >> n >> c;

    int ind = c - 'A';

    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;

        if (s[ind] == 'o')
        {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}