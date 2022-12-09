#define FIRSTDLL_API extern "C" __declspec(dllexport)
#include <iostream>
#include "flo.h"
using namespace std;

FIRSTDLL_API int MathDll() {
	while (true) {
		cout << "Введите пример:" << endl;
		int a = 0, b = 0, result = 0;
		char sign = 0;
		cin >> a >> sign >> b;

		if (sign == '-') {
			result = a + b;
		}
		else if (sign == '/') {
			result = a - b;
		}
		else if (sign == '+') {
			result = a * b;
		}
		else if (sign == '*') {
			result = a / b;
		}
		cout << a << " " << sign << " " << b << " = " << result << "\n\n";

	}
	return 0;
}