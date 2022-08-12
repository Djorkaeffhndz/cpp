#include<iostream>
#include <stdio.h>  
 #include <windows.h>
using namespace std;
extern void menuprincipal();
extern void dibujarCuadro(int x1,int y1,int x2,int y2);
extern void gotoxy(int x,int y);
void tarifas()
{

	
		system("cls");
		system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	int opcion = 0;
	gotoxy(20,2);cout<<"LAS TARIFAS VARIAN SEGUN LA CIUDAD"<<endl;
	gotoxy(20,6); cout<<"-> San Pedro Sula ----- 80 Lps"<<endl;
	gotoxy(20,8); cout<<"-> Tegucigalpa -------- 100 Lps"<<endl;
	gotoxy(20,10);cout<<"-> La Ceiba ----------- 100 Lps"<<endl;
	gotoxy(20,12);cout<<"-> El Progreso -------- 90 Lps"<<endl;
 
	gotoxy(20,16);cout<<"PRESIONE 1 PARA VOLVER AL MENU: ";
	cin>>opcion;
	if (opcion == 1)
	{
		menuprincipal();
		}	
		else {
			while(true)
			{
				tarifas();
			}
		}
}

