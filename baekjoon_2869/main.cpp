#include <iostream>
using namespace std;

unsigned int a, b, v;

int main() {
	cin >> a >> b >> v;
	v -= a;
	if (v % (a - b) != 0) v = v / (a - b) + 2;
	else v = v / (a - b) + 1;
	cout << v;
	return 0;
}