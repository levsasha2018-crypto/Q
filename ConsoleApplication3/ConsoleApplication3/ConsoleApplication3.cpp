#include <iostream>
using namespace std;
int x, y;
int N = 0;
int M = 1;

int main()
{
	cin >> x;
	for (int M = 1; N < x; M++) {
		while (M % y == 0) {
			y += 1;
			if (y == M) {
				break;
				N += 1;
			if (N == x) {
				cout << M;
				}
			}
		}
		

	}
	
	

}