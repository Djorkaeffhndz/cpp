#include<iostream>
#include <stdio.h>  
 #include <windows.h> 
using namespace std;
extern void menuprincipal();
extern void dibujarCuadro(int x1,int y1,int x2,int y2);
extern void gotoxy(int x,int y);
void tiendas()
{
	
	
		system("cls");
		system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	int opcion = 0;
	gotoxy(24,2);cout<<"ESTAS SON NUESTRAS TIENDAS"<<endl;
	gotoxy(29,4);cout<<"SAN PEDRO SULA"<<endl;
	gotoxy(2,5);cout<<"--> A) 3 avenida 11 Calle, S.O.Bo.Paz Barahona "<<endl;
	gotoxy(2,6);cout<<"    Telefono: +504 9815-1720 "<<endl;
	gotoxy(2,7);cout<<"--> B) Avenida Circunvalacion Frente a la Armeria 15 Calle 9 avenida"<<endl;
	gotoxy(2,8);cout<<"    Telefono: +504 9988-0909"<<endl;
	gotoxy(30,10);cout<<"TEGUCIGALPA"<<endl;
	gotoxy(2,11);cout<<"--> A) Centro Comercial Mini Plaza Colonia Palmira, Avenida.La Paz"<<endl;
	gotoxy(2,12);cout<<"    Tel: +504 9878-2012"<<endl;
	gotoxy(2,13);cout<<"--> B) Frente a Comercial Los Castanos"<<endl;
	gotoxy(2,14);cout<<"    Tel: +504 2239-1421"<<endl;
	gotoxy(31,16);cout<<"La Ceiba"<<endl;
	gotoxy(2,17);cout<<"--> A) Mall Megaplaza 1ra Planta Telefono: +504 9778-1991"<<endl;
	gotoxy(30,19);cout<<"El Progreso"<<endl;
	gotoxy(2,20);cout<<"--> A) Mall Megaplaza Carretera hacia Tela Telefono: +504 9456-7712"<<endl;

	gotoxy(20,22);cout<<"PRESIONE 1 PARA VOLVER AL MENU: ";
	cin>>opcion;
	if (opcion == 1)
	{
		menuprincipal();
		}	
		else {
			while(true)
			{
				tiendas();
			}
		}
}

