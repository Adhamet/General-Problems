#include <bits/stdc++.h>

using namespace std;
#define adhamet ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define lld long long double
#define intPair pair<int,int>
#define llPair pair<ll,ll>
#define ldPair pair<lld,lld>
#define F first
#define S second
#define el '\n'

void solve()
{
    string s,t;
    getline(cin, s);
    getline(cin, t);
    
    int steps=1, j=0;
    for(int i = 0; i < t.length(); i++)
    {
        if(s[j] == t[i])
        {
            steps++;
            j++;
        }
    }
    cout << steps;
}

int main()
{
    adhamet
    
    solve();
    return 0;
}