#include <iostream>

using namespace std;
extern void productos(int opcion);
extern void menuprincipal();
extern void guitarrasMenu(int opcion);
extern void audioMenu(int opcion);
extern void tecladosMenu(int opcion);
extern void microfonosMenu(int opcion);
void dibujarCuadro(int x1,int y1,int x2,int y2);
 void gotoxy(int x,int y);
void productosprincipales(int opcion)
{
	int opcionn = 0;
	
	while(true)
	{
		system("cls");
		system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA 
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	
		gotoxy(30,2);cout<<"PRODUCTOS PRINCIPALES";
		
		cout<<endl;
		cout<<endl; 
		
		gotoxy(32,6);cout<<"1 - GUITARRAS"<<endl;
		gotoxy(32,8);cout<<"2 - AUDIO"<<endl;
		gotoxy(32,10);cout<<"3 - TECLADOS"<<endl;
		gotoxy(32,12);cout<<"4 - MICROFONIA"<<endl;
		gotoxy(32,14);cout<<"0 - Salir"<<endl;
		
		gotoxy(32,16);cout<<"Opcion ---->: ";
		cin>>opcion;
		if(opcion == 0)
		{
			menuprincipal();
		}
		
		else if(opcion == 1)
		{
			guitarrasMenu(opcion);
		}
		else if(opcion == 2)
		{
			audioMenu(opcion);
		}
		else if(opcion == 3)
		{
			tecladosMenu(opcion);
		}
		else if(opcion == 4)
		{
			microfonosMenu(opcion);
		}
		
	}

}
