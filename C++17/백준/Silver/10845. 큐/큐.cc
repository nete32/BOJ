#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	queue<int> q;
	int N; cin >> N;
	while (N--) {
		string cmd; cin >> cmd;
		if (cmd == "push") {
			int X; cin >> X;
			q.push(X);
		}
		else if (cmd == "pop") {
			if (q.empty())
				cout << "-1\n";
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << '\n';
		}
		else if (cmd == "empty") {
			cout << q.empty() << '\n';
		}
		else if (cmd == "front") {
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.front() << '\n';
		}
		else if (cmd == "back") {
			if (q.empty())
				cout << "-1\n";
			else
				cout << q.back() << '\n';
		}
	}
	return 0;
}