#include <iostream>
#include <math.h>

using namespace std;

double numeroRaiz(double n1)// funcion 
{
	return sqrt(n1);
}
int main()
{
	
	double numero = 0;
	cout<<"Ingrese un numero para poder saber su raiz: ";//pedimos al usuario un numero
	cin>>numero;
	
	if(numero < 0)
	{
		cout<<"Esta raiz no existe";
	}
	else
	{
		cout<<"La raiz de "<<numero<<" es: "<<numeroRaiz(numero);
	}
	return 0;
}

