#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	string s; cin >> s;
	for (auto& c : s)
		if (isupper(c))
			cout << c;
	return 0;
}