#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string s;
	int ans = 0;
	while (getline(cin, s)) {
		ans++;
	}
	cout << ans;
	
	return 0;
}