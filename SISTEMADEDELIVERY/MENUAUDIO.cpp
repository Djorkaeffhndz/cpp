#include <iostream>

using namespace std;
extern void productosAUDIO(int opcion);
extern void productosprincipales(int opcion);
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);
void audioMenu(int opcion)
{
	int opcionn = 0;
	int error = 0;
	while(true)
	{
		system("cls");
		system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA 
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	
		gotoxy(36,2);cout<<"AUDIO";
	
		cout<<endl;
		cout<<endl; 
		
		gotoxy(28,6); cout<<"1 - SISTEMAS AEREOS"<<endl;
		gotoxy(28,8); cout<<"2 - COLUMNAS PASIVAS"<<endl;
		gotoxy(28,10);cout<<"3 - PROCESADORES DE AUDIO"<<endl;
		gotoxy(28,12);cout<<"0 - Volver"<<endl;
		
		gotoxy(30,14);cout<<"Opcion ---->: ";
		cin>>opcion;
		if(opcion == 0)
		{
				productosprincipales(opcion);
		}
		
		else if(opcion == 1)
		{
			productosAUDIO(opcion);
		}
		else if(opcion == 2)
		{
			productosAUDIO(opcion);
		}
		else if(opcion == 3)
		{
			productosAUDIO(opcion);
		}
		else if(opcion > 3)
		{	
			
			while(error !=1)
			{
				system("cls");
				gotoxy(30,14);cout<<"EL NUMERO NO FORMA PARTE DE LA LISTA"<<endl;
				gotoxy(30,15);cout<<"Presiones 1 para volver al menu: ";
				cin>>error;
				if(error == 1)
				{
					audioMenu(opcion);
				}
			}
			
			
		}
	}

}
