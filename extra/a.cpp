#include <iostream>
using namespace std;
 
int main() {
	int kases;
	cin >> kases;
	while(kases--) {
		int n, m;
		cin >> n >> m;
		
			bool possible = false;
			for (int i = 0; i < n; i++) {
				int a1, a2, b1, b2;
				cin >> a1 >> a2 >> b1 >> b2;
				if (a2 == b1) {
					possible = true;
				}
			}
			if (m%2 != 0) {
				cout << "NO" << endl;
			} else {
			if (possible) {
				cout << "YES" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}
	}
	return 0;
}