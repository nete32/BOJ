#include <cstdio>
using namespace std;

int main()
{
	int T; scanf("%d", &T);
	while (T--) {
		int a, b, c, d, e;
		scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
		printf("$%.2f\n", a * 350.34 + b * 230.90 + c * 190.55 + d * 125.30 + e * 180.90);
	}
	return 0;
}