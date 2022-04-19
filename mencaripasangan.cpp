#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define FOR(t) for (int i = 0; i < t; i++)
#define fora(i, j) for (auto i : j)
#define vi vector<int>
#define vs vector<string>
#define vpll vector<pair<ll, ll>>
#define vpss vector<pair<string, string>>
#define vpls vector<pair<ll, string>>
#define vpii vector<pair<int, int>>
#define vpis vector<pair<int, string>>
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    vi v;
    vpii v2;
    while (cin >> a)
    {
        v.pb(a);
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - 1; j++)
        {
            if (v[v.size() - 1] == v[i] + v[j])
            {
                b = i;
                c = j;
            }
        }
    }
    cout << c << " " << b;

    return 0;
}