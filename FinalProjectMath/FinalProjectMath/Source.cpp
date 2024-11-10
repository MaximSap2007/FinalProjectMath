#include<iostream>
#include<fstream>
#include<string>
#include"Math_library.h"

using namespace std;

int main()
{
	float a[10] = {0,0,0,0,0,0,0,0,0,0};
	int n;
	cout << "N:"; cin >> n;
	if (n == 1)
	{
		Math m;
		m.Basic(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	};
	if (n == 2)
	{
		MathSinCosTgCtg sincostgctg;
		sincostgctg.Basic(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	};
	if (n == 3)
	{
		MathStepeni stepeni;
		stepeni.Basic(a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7], a[8], a[9]);
	};
}