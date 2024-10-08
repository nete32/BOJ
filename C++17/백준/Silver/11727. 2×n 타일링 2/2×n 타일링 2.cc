#include <iostream>
using namespace std;

int dp[1007];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	dp[1] = 1;
	dp[2] = 3;
	for (int i = 3; i <= 1000; i++)
		dp[i] = (2 * dp[i - 2] + dp[i - 1]) % 10007;

	int n; cin >> n;
	cout << dp[n];

	return 0;
}