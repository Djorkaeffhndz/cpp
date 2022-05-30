#include <iostream>

using namespace std;

int main()
{
	
	int a;
	int b;
	int suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	//Datos de entrada
	cout<<" Ingrese el valor de a: ";
	cin>> a;
	cout<< endl;
	cout<<" Ingrese el valor de b: ";
	cin>> b;
	cout<< endl;
	//Procesos
	suma = (a + b);
	resta = (a - b);
	multiplicacion = (a * b);
	division = ( a / b);
	//Datos de salida
	cout<<" El resultado de la suma a + b es: "<< suma<<endl;
	cout<<" El resultado de la resta a - b es: "<< resta<<endl;
	cout<<" El resultado de la multiplicacion a * b es: "<< multiplicacion<<endl;
	cout<<" El resultado de la division a / b es: "<< division<<endl;
	return 0;
	
}

