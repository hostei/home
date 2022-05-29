#include <bits/stdc++.h>

#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

using namespace std;

void print_large_fact(int n)
{
    vector<int> res(1, 1);
    for (int i = 2; i <= n; i++)
    {
        int c = 0;
        for (int j = 0; j < res.size(); j++)
        {
            int product = (i * res[j] + c);
            res[j] = product % 10;
            c = product / 10;
        }

        for (; c != 0; c /= 10)
            res.push_back(c % 10);
    }
    int sum = 0;
    for (int i = res.size() - 1; i >= 0; i--)
        sum += res[i];
    cout << sum;
}

void sol()
{
    int n;
    cin >> n;
    print_large_fact(n);
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
