#include <iostream>
using namespace std;
using ll = long long;

ll dp[70];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    dp[0] = dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i <= 67; i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4];

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}