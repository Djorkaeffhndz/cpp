#include <iostream>
using namespace std;
int main() {
	// Datos de entrada
	double subtotal=0, total=0, imp=0, Descuento=0, Impuesto=0;
	int descuento=0;
	char esta_Exenta;
	cout << "Ingrese el subtotal de la factura: ";
	cin >> subtotal;
	cout << "\nIngrese el descuento (0, 10, 15, 20): ";
	cin >> descuento;
	cout<<"\nFactura Exenta? S/N"<<endl;
    cin>>esta_Exenta;
	//Proceso
	if(esta_Exenta == 'S' || esta_Exenta == 's')
  	{
    	Descuento= (subtotal*descuento)/ 100;
		total=subtotal;
  	}
	else 
		{
			Descuento= (subtotal* descuento)/ 100;
			Impuesto=(subtotal-Descuento)* 0.15;
			total= subtotal-Descuento + Impuesto;
		}	
	cout<< "\nTotal a pagar es: " << total<< endl;	
	return 0;
}
