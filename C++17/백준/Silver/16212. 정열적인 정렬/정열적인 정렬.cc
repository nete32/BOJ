#include <iostream>
#include <algorithm>
using namespace std;

int arr[1002];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int N; cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";

	return 0;
}