#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    ll phi = n;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            phi /= i;
            phi *= i - 1;

            while (n % i == 0) n /= i;
        }
    }

    if (n > 1) {
        phi /= n;
        phi *= n - 1;
    }
    cout << phi;
    return 0;
}