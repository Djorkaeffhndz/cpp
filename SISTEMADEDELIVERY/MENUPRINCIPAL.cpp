#include <iostream>
#include <stdio.h>  
 #include <windows.h> 

using namespace std;
extern void productosprincipales(int opcion);
extern void imprimirFactura();
extern void registro();
extern void tarifas();
extern void tiendas();
 void dibujarCuadro(int x1,int y1,int x2,int y2);
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 void dibujarCuadro(int x1,int y1,int x2,int y2){
	int i;
	
    for (i=x1;i<x2;i++){
		gotoxy(i,y1); cout << "\304"; //linea horizontal superior
		gotoxy(i,y2); cout << "\304"; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){
		gotoxy(x1,i); cout <<"\263"; //linea vertical izquierda
		gotoxy(x2,i); cout <<"\263"; //linea vertical derecha
	}
	
    gotoxy(x1,y1); cout<< "\332"; 
    gotoxy(x1,y2); cout<< "\300";
    gotoxy(x2,y1); cout<< "\277";
    gotoxy(x2,y2); cout<< "\331";
}
void menuprincipal()
{
	int opcion = 0;
	
	while(true)
	{
		
		system("cls");
		system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
		system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
		dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
		dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
		
		
		gotoxy(20,2);cout<<"BIENVENIDO A ODH ROAR MUSICAL STUDIO";
	
		cout<<endl;
		cout<<endl; 
		
		gotoxy(20,6);cout<<"1 - PRODUCTOS EN STOCK"<<endl;
		gotoxy(20,8);cout<<"2 - TARIFA DE ENVIOS SEGUN LA CIUDAD"<<endl;
		gotoxy(20,10);cout<<"3 - TIENDAS"<<endl;
		gotoxy(20,12);cout<<"4 - Imprimir Factura"<<endl;
		gotoxy(20,14);cout<<"0 - Salir"<<endl;
		
		gotoxy(20,16);cout<<"Opcion ---->: ";
		cin>>opcion;
		if(opcion == 0)
		{
			system("cls");
			gotoxy(20,2);cout<<"GRACIAS POR VISITARNOS ESPERAMOS VERTE PRONTO"<<endl;
			gotoxy(28,4);cout<<"ODH ROAR MUSICAL STUDIO"<<endl;
			system("pause");
			return;
		}
		
		else if (opcion == 4)
		{
			
			imprimirFactura();
		}
		else if(opcion == 1)
		{
			productosprincipales(opcion);
		}
		else if(opcion == 2)
		{	
			tarifas();
		}
		else if(opcion == 3)
		{
			tiendas();
		}
		
	}

}
