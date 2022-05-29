#include <bits/stdc++.h>

#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

using namespace std;
int partition(int arr[], int l, int r)
{
    int p = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < p)
        {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    // swap
    int tmp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = tmp;
    return i + 1;
}

void quick_sort(int arr[], int l, int r)
{
    if (r > l)
    {
        int pi = partition(arr, l, r);
        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}

void sol()
{
    int nintex[] = {1, 2, 3, 4, 5, 8, 6, 7};
    quick_sort(nintex, 0, sizeof(nintex) / sizeof(int) - 1);
    int k = 9;
    int n = sizeof(nintex) / sizeof(int);
    cout << "only" ;
    for (int i = 0; i < n / 2; i++)
    {
        int a = nintex[i];
        for (int j = n - 1; a + nintex[j] >= k; j--)
        {
            if (a + nintex[j] == k)
            {
                cout << "(" << a << "," << nintex[j] << ")";
            }
        }
    }
    cout << "have the sum equal " << k;
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
