#include <iostream>
#include <algorithm>
using ll = long long;
using namespace std;

class SegmentTree {
    public:
    ll mndat[300000], mxdat[300000], siz = 1;

    void init(int N)
    {
        siz = 1;
        while (siz < N) siz *= 2;
        for (int i = 1; i < siz * 2; i++) {
            mndat[i] = 1e9+2;
            mxdat[i] = -1e9+2;
        }
    }

    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        mndat[pos] = mxdat[pos] = x;
        while (pos >= 2) {
            pos /= 2;
            mndat[pos] = min(mndat[pos * 2], mndat[pos * 2 + 1]);
            mxdat[pos] = max(mxdat[pos * 2], mxdat[pos * 2 + 1]);
        }
    }

    ll mnquery(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return 1e9+2;
        if (l <= a && b <= r) return mndat[u];
        ll m = (a + b) / 2;
        ll AnswerL = mnquery(l, r, a, m, u * 2);
        ll AnswerR = mnquery(l, r, m, b, u * 2 + 1);
        return min(AnswerL, AnswerR);
    }

    ll mxquery(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l) return -1e9+2;
        if (l <= a && b <= r) return mxdat[u];
        ll m = (a + b) / 2;
        ll AnswerL = mxquery(l, r, a, m, u * 2);
        ll AnswerR = mxquery(l, r, m, b, u * 2 + 1);
        return max(AnswerL, AnswerR);
    }
};

SegmentTree st;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, M; cin >> N >> M;

    st.init(N);
    for (int i = 1; i <= N; i++) {
        int X; cin >> X;
        st.update(i, X);
    }

    for (int i = 0; i < M; i++) {
        int a, b; cin >> a >> b;
        cout << st.mnquery(a, b + 1, 1, st.siz + 1, 1) << " " << st.mxquery(a, b + 1, 1, st.siz + 1, 1) << "\n";
    }
    return 0;
}