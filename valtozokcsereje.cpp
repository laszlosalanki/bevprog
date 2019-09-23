#include "std_lib_facilities.h"
int main()
{
	int a = 6;
	int b = 9;

	cout << "Változók a csere előtt: a = " << a << "; b = " << b << "\n";

	a = a * b;
    	b = a / b;
    	a = a / b;

	cout << "Változók a csere után: a = " << a << "; b = " << b << "\n";
}
