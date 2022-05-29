#include <bits/stdc++.h>

#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

using namespace std;

int mod(string num, int x)
{
    int r = 0;
    for (int i = 0; i < num.length(); i++)
        r = (10 * r + (int)num[i] - '0') % x;
    return r;
}

bool isprime(long long n)
{
    if (n == 2 || n == 3 || n == 5)
    {
        return true;
    }

    string str = to_string(n);
    char y = str[str.length() - 1];
    if (y == '1' || y == '3' || y == '7' || y == '9')
    {
        int t = 0;
        for (long long j = 2; j <= (long long)(sqrt(n)); j++)
        {
            if (!mod(str, j))
            {
                t++;
                return false;
            }
        }
        if (t == 0)
            return true;
    }
    return false;
}

void sol()
{
    long long sum = 0;
    for (long long i = 2; sum <= 8888; i++)
    {
        if (isprime(i))
            sum++;
        if (sum == 8888)
        {
            cout << i << "\n";
            break;
        }
    }
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
