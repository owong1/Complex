#include <iostream>
#include "Complex.h"

using namespace std;

int main(){
	Complex<int> c1(3, 2);
	Complex<int> c2(6, 4);
	Complex<int> ans;

	cout << "complex 1: " << c1 << endl;
	cout << "complex 2: " << c2 << endl;

	cout << endl;

	ans = c1 + c2;
	cout << c1 << " + " << c2 << " = " << ans << endl;

	ans = c1 - c2;
	cout << c1 << " - " << c2 << " = " << ans << endl;

	ans = c1 * c2;
	cout << c1 << " * " << c2 << " = " << ans << endl;

	ans = c2 / c1;
	cout << c2 << " / " << c1 << " = " << ans << endl;

	getchar();
	return 0;
}