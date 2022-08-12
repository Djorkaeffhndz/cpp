#include <iostream>
#include <stdio.h>  
 #include <windows.h>
using namespace std;

double subtotal;
float impsv = 15;
double total;
string listaProductos;
extern void dibujarCuadro(int x1,int y1,int x2,int y2);
extern void gotoxy(int x,int y);
extern void menuprincipal();
void agregarProducto(string descripcion,int cantidad,double precio)
{
	listaProductos = listaProductos + descripcion;
	subtotal = subtotal + (cantidad * precio);	
}

void imprimirFactura()
{
	
		system("cls");
		system("mode con: cols=80 lines=35"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,34); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,5); //SE DIBUJA EL CUADRO DEL TITULO

	gotoxy(28,2);cout<<"ODH ROAR MUSICAL STUDIO"<<endl;
	gotoxy(32,3);cout<<"www.odhmusic.com"<<endl;
	gotoxy(33,4);cout<<"Tel: 9915-1720"<<endl;
	cout<<endl;
	char nombre[50],apellido[50],direccion[150],metodopago[10];
	int ciudad = 0, fact = 0;
	
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS

	dibujarCuadro(1,6,77,30); //SE DIBUJA EL CUADRO DEL TITULO

	gotoxy(26,7);cout<<"DATOS GENERALES DEL CLIENTE"<<endl;
	
	gotoxy(2,8);cout<<"INGRESE SU NOMBRE: ";
	cin>>nombre;
	cin.getline(nombre,50);
	gotoxy(2,9);cout<<"INGRESE SU APELLIDO: ";
	cin>>apellido;
	cin.getline(apellido,50);
	gotoxy(2,10);cout<<"DIRECCION: ";
	cin>>direccion;
	cin.getline(direccion,150);
	gotoxy(2,11);cout<<"METODO DE PAGO: ";
	cin>>metodopago;
	cin.getline(metodopago,10);
	gotoxy(2,12);cout<<"SELECCIONE LA CIUDAD DE ENVIO"<<endl;
	gotoxy(40,8);cout<<"1) San Pedro Sula"<<endl;
	gotoxy(40,9);cout<<"2) Tegucigalpa"<<endl;
	gotoxy(40,10);cout<<"3) La Ceiba"<<endl;
	gotoxy(40,11);cout<<"4) El Progreso"<<endl;
	gotoxy(40,12);cout<<"Opcion-->: ";
	gotoxy(50,12);cin>>ciudad;

	gotoxy(30,14);cout<<"LISTADO DE PRODUCTOS"<<endl;
	gotoxy(2,15);cout<<listaProductos<<endl;
	cout<<endl;
	impsv = impsv / 100;
	impsv = subtotal * impsv;
	total = subtotal + impsv;
	gotoxy(4,20);cout<<"Subtotal: "<<subtotal<<" Lps";
	cout<<endl;
	gotoxy(4,22);cout<<"Impuesto del 15%: "<<impsv<<" Lps"<<endl;
	cout<<endl;
	if(ciudad == 1)
	{
		gotoxy(4,24);cout<<"Costo Envio: 80.00 Lps"<<endl;
		gotoxy(4,26);cout<<"TOTAL A PAGAR: "<<total+80<<" Lps"<<endl;
		
	}
	else if(ciudad == 2)
	{
		gotoxy(4,24);cout<<"Costo Envio: 100.00 Lps"<<endl;
		gotoxy(4,26);cout<<"TOTAL A PAGAR: "<<total+100<<" Lps"<<endl;
	}
	else if(ciudad == 3)
	{
		gotoxy(4,24);cout<<"Costo Envio: 100.00 Lps"<<endl;
		gotoxy(4,26);cout<<"TOTAL A PAGAR: "<<total+100<<" Lps"<<endl;
	}
	else if(ciudad == 4)
	{
		gotoxy(4,24);cout<<"Costo Envio: 90.00 Lps"<<endl;
		gotoxy(4,26);cout<<"TOTAL A PAGAR: "<<total+100<<" Lps"<<endl;
	}
	
	gotoxy(44,20);cout<<"CONFIRMAR PEDIDO"<<endl;
	gotoxy(44,22);cout<<"1) Si"<<endl;
	gotoxy(44,24);cout<<"2) No"<<endl;
	gotoxy(44,26);cout<<"Opcion-->: ";
	gotoxy(55,26);cin>>fact;
	if(fact == 1)
	{
		
			gotoxy(25,28);cout<<"GRACIAS POR SU COMPRA"<<endl;
			gotoxy(25,29);system("pause");
			menuprincipal();	
	}
	else if(fact == 2)
	{
		menuprincipal();
	}
}
