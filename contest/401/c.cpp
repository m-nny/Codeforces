
#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;
typedef unsigned long long ull;
typedef map <int, int> mii;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

int const maxn = int(1e5 + 12);
int const maxb = int(2e6 + 12);
int const inf = int(1e9 + 7);
ll const linf = ll(1e18 + 12);
double const eps = 1e-7;
double const pi = acos(-1);
#ifdef WIN32
	#define I64 "%I64d"
#else
	#define I64 "%lld"
#endif
#define mp make_pair
#define pb push_back
#define F first
#define S second
//#define fn ""

int a, b;
string s;

int main()
{
	#ifdef fn
		freopen(fn".in", "r", stdin);
		freopen(fn".out", "w", stdout);
	#endif
	scanf("%d%d", &a, &b);
	for (int i = 0; i < b; i++)
		s += "1";
	for (int i = 1; i < int(s.size()); i += 3)
	{
		//cout << s.substr(0, i + 1) + "0" + s.substr(i + 1, s.size() - i - 1) << '\n';
		s = s.substr(0, i + 1) + "0" + s.substr(i + 1, s.size() - i - 1);
	}
}