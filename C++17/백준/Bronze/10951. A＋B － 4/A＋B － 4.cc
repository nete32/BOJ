#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int a, b;
	while (cin >> a >> b) {
		cout << a + b << '\n';
	}

	return 0;
}