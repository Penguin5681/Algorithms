/* #include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int n, m, a[N], h[N], e[N << 1], ne[N << 1], idx;
vector<int> tr(N * 32);
int q[N];

void add(int a, int b)
{
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void dfs(int u, int father, int val)
{
    q[u] = val;
    for (int i = h[u]; ~i; i = ne[i])
    {
        int j = e[i];
        if (j == father)
            continue;
        dfs(j, u, val ^ a[j]);
    }
}

void insert(int u, int v)
{
    for (int i = 31; i >= 0; i--)
    {
        int x = (v >> i) & 1;
        if (tr[u].size() == x)
            tr[u].push_back(tr.size());
        u = tr[u][x];
    }
}

int query(int u, int v)
{
    int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        int x = (v >> i) & 1;
        if (tr[u].size() > x + 1)
        {
            ans += (1 << i);
            u = tr[u][x ^ 1];
        }
        else
        {
            u = tr[u][x];
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(h, -1, sizeof h);
        idx = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            add(u, v), add(v, u);
        }
        tr[0].push_back(1);
        for (int i = 1; i <= n; i++)
        {
            insert(0, a[i]);
            dfs(i, -1, a[i]);
        }
        int qq;
        cin >> qq;
        while (qq--)
        {
            int r, v;
            cin >> r >> v;
            cout << (query(0, q[r] ^ q[v]) ^ q[r]) << endl;
        }
        for (int i = 0; i < tr.size(); i++)
            tr[i].clear();
        tr.clear();
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

int n, t, m, root, v, k, cnt, res, head[N], dep[N], a[N];
bool vis[N];
vector<int> b[N];

struct node
{
    int to, nxt;
} edge[N << 1];

void add(int x, int y)
{
    edge[++cnt].to = y;
    edge[cnt].nxt = head[x];
    head[x] = cnt;
}

void dfs(int x, int fath)
{
    dep[x] = dep[fath] + 1;
    for (int i = head[x]; i; i = edge[i].nxt)
    {
        int y = edge[i].to;
        if (y == fath)
            continue;
        dfs(y, x);
        b[x].push_back(y);
    }
}

void dfs2(int x, int fath, int sum)
{
    if (sum == 0)
    {
        res = max(res, dep[x] - dep[root] + 1);
        return;
    }
    for (int i = 0; i < b[x].size(); i++)
    {
        int y = b[x][i];
        if (y == fath)
            continue;
        dfs2(y, x, sum ^ a[y]);
    }
}

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        memset(head, 0, sizeof head);
        memset(vis, false, sizeof vis);
        memset(b, 0, sizeof b);
        cnt = 0;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            add(x, y);
            add(y, x);
        }
        cin >> m;
        while (m--)
        {
            cin >> root >> v;
            res = 0;
            dfs(root, 0);
            dfs2(v, 0, a[v]);
            cout << res << endl;
        }
    }
    return 0;
}