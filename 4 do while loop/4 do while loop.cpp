// 4 do while loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
int main()
{
	using namespace std;
	int x = 100;
	do{
		cout << x;
		cout << endl;
		x += 2;
	}
		while (x <= 200);
	
return 0;
}
