#include <conio.h>
#include <stdio.h>

#include <iostream>
using namespace std;


int main()
{
	float n1, n2, n3, op;
	
	cout << "Introduzca el primer numero: ";
	cin >> n1;
	cout << "Introduzca el segundo numero: ";
	cin >> n2;
	cout << "Introduzca el tercer numero: ";
	cin >> n3;
	op = n1 + n2/n3;
	cout << "Su resultado es: " << op;
	
	return 0;
	
}
