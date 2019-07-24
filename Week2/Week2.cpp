#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define PI 3.14159
#define REQUEST 20

int main() {
	int h = 0, r = 0, n = 0;
	cin >> h >> r;
	double V = (PI * r * r * h) / 1000.0;
	n = ceil(REQUEST / V);
	cout << n;
	return 0;
}
