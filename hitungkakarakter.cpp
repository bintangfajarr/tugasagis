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
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    bool benar = false;
    int a, tanda, temp;
    cin >> str >> a;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'A')
        {
            tanda = i;
        }
        else if (str[i] != 'A')
        {
            benar = true;
            break;
        }
    }
    if (benar)
    {
        cout << 0;
    }
    else
    {
        temp = str.size() / a;
        // if (tanda <= (str.size() % a))
        // {
        //     temp += 1;
        // }
    }
    cout << temp;

    return 0;
}