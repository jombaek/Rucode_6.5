#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double num;
	cin >> num;

	cout << (int)floor(num) << " " << (int)ceil(num) << " " << (int)round(num);

	return 0;
}