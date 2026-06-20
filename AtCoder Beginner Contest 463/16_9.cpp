//-----------राधा-----------//
#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);

    int x,y;
    cin >> x >> y;
    
    int ans = x%16;
    int ans1 = y%9;

    if(ans == ans1) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}