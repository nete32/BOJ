#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int x, y, w, h; cin >> x >> y >> w >> h;
	cout << min(min(x, w - x), min(y, h - y));

	return 0;
}