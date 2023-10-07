#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
 
	vector<int>v(n);
 
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
 
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
 
		int l = -1; //v[l]<=x
		int r = n; //v[r]>x
 
		while (r > (l + 1)) {
			int mid = (l + r) / 2;
 
			if (v[mid] < x) {
				l = mid;
			}
			else {
				r = mid;
			}
		}
		print(r + 1);
 
 
	}
    
    return 0;
}