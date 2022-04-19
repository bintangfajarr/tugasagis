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
    string key, temp;

    bool benar = false;
    cin >> str >> key;
    int penambah = 0;
    for (int i = 0; i < str.size(); i++)
    {
        penambah = i;
        for (int j = 0; j < key.size(); j++)
        {
            temp += str[penambah++];
        }
        if (i < str.size() - key.size() + 1)
        {
            if (temp == key)
            {
                cout << key << "\n";
                benar = true;
                break;
            }
            else
            {
                cout << temp
                     << "\n";
            }
        }

        temp = "";
    }
    if (benar)
    {
        cout << "\n"
             << "Pattern ditemukan!!";
    }
    else
        cout << "\n"
             << "Pattern tidak ditemukan!!";

    return 0;
}