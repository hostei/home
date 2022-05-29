#include <bits/stdc++.h>

#define ll long long
#define ld long double
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

using namespace std;
void sol()
{
    int x;
    cin >> x;
    vector<vector<int>> arr(x, vector<int>(x, 0));
    vector<vector<int>> arr_ans(x, vector<int>(x, 0));
    int disc = 0;
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (; x > 1; x -= 2)
    {
        for (int i = 1; i < x; i += 1)
        {
            arr_ans[i + disc][0 + disc] = arr[i - 1][0];
        }
        for (int i = 1; i < x; i++)
        {
            arr_ans[x - 1 + disc][i + disc] = arr[x - 1][i - 1];
        }

        for (int i = 0; i < x - 1; i += 1)
        {
            arr_ans[i + disc][x - 1 + disc] = arr[i + 1][x - 1];
        }
        for (int i = 0; i < x - 1; i++)
        {
            arr_ans[0 + disc][i + disc] = arr[0][i + 1];
        }
        arr.erase(arr.begin());
        arr.pop_back();
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i].erase(arr[i].begin());

            arr[i].pop_back();
            //            arr[i].erase(arr[i].end());
        }
        disc++;
    }
    if (x == 1)
        arr_ans[(arr_ans.size() - 1) / 2][(arr_ans.size() - 1) / 2] = arr[0][0];
    for (int i = 0; i < arr_ans.size(); i++)
    {

        for (int j = 0; j < arr_ans[i].size(); j++)
        {
            cout << arr_ans[i][j] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    // std::ios_base::sync_with_stdio(0);
    //  cin.tie(NULL);
    //   cout.tie(NULL);
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
