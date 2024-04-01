/**
 * Title: sayedMabdullah
 * Date: "02-04-2024" Time:"00:49:34"
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
    int n;
    cin >> n;

    if (n <= 1000 and n > 100)
    {
        cout << n - 25 << endl;
    }
    else if (n <= 5000 and n > 1000)
    {
        cout << n - 100 << endl;
    }
    else if (n > 5000)
    {
        cout << n - 500 << endl;
    }
    else
    {
        cout << n << endl;
    }
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