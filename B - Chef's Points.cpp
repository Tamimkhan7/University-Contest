#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define sq(x) (x) * (x)
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;
#define pb push_back
#define pop pop_back()
#define len(a) sizeof(a)
#define lc (n * 2)
#define rc ((n * 2) + 1)
void solve()
{
    int x, y;
    cin >> x >> y;
    int k = x + y;
    int i = 500 - (k * 2) + 1000 - (y * 4);
    int j = 500 - (x * 2) + 1000 - (k * 4);
    if (i > j)
        cout << i << endl;
    else
        cout << j << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}