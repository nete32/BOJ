#include <cstdio>
using namespace std;

const int INF = 1e9;
int dist[101][101];
int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}

	for (int i = 1; i <= m; i++) {
		int u, v, w;
		scanf("%d%d%d", &u, &v, &w);
		dist[u][v] = min(dist[u][v], w);
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (dist[i][j] == INF) printf("0 ");
			else printf("%d ", dist[i][j]);
		}
		printf("\n");
	}
	return 0;
}