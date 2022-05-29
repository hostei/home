#include <bits/stdc++.h>

#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

using namespace std;


void sol()
{
    string L1, L2;
    cin >> L1 >> L2;
    string s = "";
    int c = 0;
    for (int i = 0; i < L1.length(); i++)
    {
        if (L1[i] == L2[i])
        {
            c++;
            s += L1[i];
        }
    }
    cout << c << "(" << s << ")\n";
}
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    //  cin >> x;
    //   for (int z = 0; z < x; z++)
    {
        //       cout << "Case #" << z + 1 << ": ";
        sol();
        //       cout << "\n";
    }

    return 0;
}
