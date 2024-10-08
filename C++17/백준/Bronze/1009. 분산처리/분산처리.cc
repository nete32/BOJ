#include <iostream>
using namespace std;

int arr[10][4] = {
	{10, 10, 10, 10},
	{1, 1, 1, 1},
	{2, 4, 8, 6},
	{3, 9, 7, 1},
	{4, 6, 4, 6},
	{5, 5, 5, 5},
	{6, 6, 6, 6},
	{7, 9, 3, 1},
	{8, 4, 2, 6},
	{9, 1, 9, 1},
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		int a, b; cin >> a >> b;
		cout << arr[(a % 10)][(b - 1) % 4] << '\n';
	}
	return 0;
}