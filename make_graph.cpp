#include<iostream>
#include<vector>
#include<array>
#include<map>
#include<unordered_map>
#include<cmath>
#include<list>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<string> vs;
typedef map<int, int> mii;
typedef pair<int, int> pii;
typedef pair<int, vvi> pivvi;

#define forn(i, n) for (int i = 0; i < n; i++)
#define pb push_back

vi input_vector()
{
    int n;
    cin >> n;
    vi v(n);
    forn(i, n)
    {
        cin >> v[i];
    }
    return v;
}

void print_vec(vi &v)
{
    forn(i, v.size())
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

pivvi make_graph()
{
    int v = 7; // vertex set complete
    // vs vertices({"MU", })
    vvi edges({{0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 5}, {3, 4}, {6, 6}});
    pair<int, vvi> graph(make_pair(v, edges));
    return graph;
}

vvb get_adj_matrix(pivvi &graph)
{
    //
}

void solve()
{
    pivvi graph = make_graph();
    vvb adj_matrix = get_adj_matrix(graph);
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}