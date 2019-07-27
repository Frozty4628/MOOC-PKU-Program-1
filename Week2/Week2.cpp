#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
#define PI 3.14159
#define REQUEST 20

int main() {
	unsigned int x = 0xffffffff;
	unsigned int b = x + 2;
	int y = x;
	printf("%x,%d,%x,%d", y, y, b, b);
	return 0;
}
