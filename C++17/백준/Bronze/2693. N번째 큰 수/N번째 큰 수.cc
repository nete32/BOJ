#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int T; cin >> T;
	while (T--) {
		for (int i = 0; i < 10; i++)
			cin >> arr[i];

		sort(arr, arr + 10);
		cout << arr[7] << "\n";
	}
	return 0;
}