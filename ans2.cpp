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
    int nintex[] = {16, 12, 10, 11, 15, 10};
    quick_sort(nintex, 0, sizeof(nintex) / sizeof(int) - 1);
    cout << "sorted nintex[] = {";
    int n = sizeof(nintex) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << nintex[i] << " ";
    }
    cout << "}\n";
    if (n % 2 == 0)
        cout << "Median " << (nintex[(n) / 2 - 1] + nintex[(n) / 2]) / 2.0 << "\n";
    else
        cout << "Median " << nintex[(n) / 2] << "\n";

    cout << "sum largest: " << nintex[n - 1] + nintex[n - 2] << "\n";
    cout << "sum smallest: " << nintex[0] + nintex[1] << "\n";
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
