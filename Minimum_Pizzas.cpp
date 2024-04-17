/**
 * Title: sayedMabdullah
 * Date: "18-04-2024" Time:"00:04:00"
 * do you have any query ?? sayedmabdullah13@gmail.com
 *
 * ---I'm starting in the name of Almighty ALLAH---
 **/

#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define pl pair<ll, ll>
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl "\n"
#define out cout
#define in cin
#define loop for (int i = 0; i < n; i++)
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;

    int need = a * b;

    // cout << (need / 4) + 1 << endl;
    if (need % 4 == 0)
        cout << (need / 4) << endl;
    else
        cout << (need / 4) + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    in >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;

    /* Alhamdulillah For Everything */
}