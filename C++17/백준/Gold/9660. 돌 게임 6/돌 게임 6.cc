#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll N; cin >> N;
    if (N % 7 == 0 || N % 7 == 2)
        cout << "CY";
    else
        cout << "SK";
    return 0;
}