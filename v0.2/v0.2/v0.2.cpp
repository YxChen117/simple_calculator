// v0.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

extern "C" {
#include "calculator_library.h"
	extern double calculator_core(double n1, double n2, char opr);
}
using namespace std;

int calculator_main()
{
	cout <<  calculator_core(2, 3, '+') << endl;
    return 0;
}

