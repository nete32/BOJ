#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int i;
	string s;
	cin >> s >> i;
	cout << s[i-1];
	
	return 0;
}