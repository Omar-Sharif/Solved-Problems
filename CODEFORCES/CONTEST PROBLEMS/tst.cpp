#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int M = 100000 + 5;
ll s[M];
ll maxi[4*M];

void init(int at, int l, int r) {
	if(l == r) {
		maxi[at] = s[l];
		return ;
	}

	int left = at+at, right = left+1, mid = (l+r) / 2;
	init(left, l, mid);
	init(right, mid+1, r);
	maxi[at] = max(maxi[left], maxi[right]);
}

ll query(int at, int l, int r, int lo, int hi) {
	if(l > hi or r < lo) return INT_MIN;
	if(l >= lo and r <= hi) return maxi[at];

	int left = at+at, right = left+1, mid = (l+r) / 2;
	ll q1 = query(left, l, mid, lo, hi);
	ll q2 = query(right, mid+1, r, lo, hi);
	return max(q1, q2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	ll n, d;
	cin >> n >> d;
	int a[n+1];
	for(int i=1; i<=n; ++i) cin >> a[i];
	s[0] = 0;
	for(int i=1; i<=n; ++i) s[i] = s[i-1] + a[i];

	init(1, 1, n);

	ll cnt = 0;
	ll carry = 0;
	for(int i=1; i<=n; ++i) {
		ll sum = carry + s[i];
		if(sum > d) {
			cout << "-1";
			return 0;
		}

		if(a[i] == 0) {
			if(sum >= 0) continue;

			++cnt;
			if(i == n) continue;

			ll tmax = query(1, 1, n, i+1, n);
			ll invest = min(d - tmax - carry, d - sum);
			sum += invest;
			carry += invest;
			if(sum < 0 or sum > d) {
				cout << "-1";
				return 0;
			}

			// cout << tmax << " " << invest << " " << sum << " " << carry << "\n";
		}
	}

	cout << cnt;

	return 0;
}
