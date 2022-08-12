#include <iostream>
using namespace std;
extern void imprimirfactura();
extern void menuprincipal();
extern void audioMenu(int opcion);
extern void agregarProducto(string descripcion,int cantidad,double precio);
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);
void productosAUDIO(int opcion)
{	system ("cls");
	system("mode con: cols=80 lines=25"); //SE DEFINE LAS DIMENSIONES DE LA VENTANA DEL PROGRAMA
	system("COLOR E0"); //SE DA UN COLOR DE FONDO Y COLOR A LAS LETRAS
	dibujarCuadro(0,0,78,24); //SE DIBUJA EL CUADRO PRINCIPAL
	dibujarCuadro(1,1,77,3); //SE DIBUJA EL CUADRO DEL TITULO
	int opcionProducto = 0;
	
	switch (opcion)
	{
		case 1:
			{
				gotoxy(30,2); cout<<"SISTEMAS AEREOS"<<endl;
			               
				gotoxy(14,6); cout<<"1 - SISTEMA LINE ARRAY 15 X 6.5 -------------- Lps.18,500"<<endl;
				gotoxy(14,8); cout<<"2 - COLUMNA AMPLIFICADA 8 x 2 de 360w clase D- Lps.30,000"<<endl;
				gotoxy(14,10);cout<<"3 - Volver"<<endl;
				gotoxy(30,12);cout<<"Opcion----->:";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - SISTEMA LINE ARRAY 15 X 6.5 - Lps 18,500.00",1,18500);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - COLUMNA AMPLIFICADA 8 x 2 de 360w clase D - Lps 30,000.00",1,30000);	
						break;
					}
					case 3:
						{
							audioMenu(opcion);
						}
					default:
					{
						system("cls");
						gotoxy(28,10);cout<<"Opcion no valida";
						gotoxy(20,20);system("pause");
						menuprincipal();
						
					}
					break;
				}
				cout<<"PRODUCTO AGREGADO"<<endl;
				system("pause");
				break;
			}
		case 2:
			{
				gotoxy(32,2); cout<<"COLUMNAS PASIVAS"<<endl;
				              
				gotoxy(14,6); cout<<"1 - COLUMNA PASIVA 15 DE 400W 8 OHM ------- Lps.7,475"<<endl;
				gotoxy(14,8); cout<<"2 - MONITOR PASIVO 15 DE 1000W---- -------- Lps.7,878"<<endl;
				gotoxy(14,10);cout<<"3 - COLUMNA PASIVA DOBLE 15 DE 4000W 4 OHM- Lps.25,300"<<endl;
				gotoxy(14,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,14);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - COLUMNA PASIVA 15 DE 400W 8 OHM - Lps 7,475.00",1,7475);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - MONITOR PASIVO 15 DE 1000W - Lps 7,878.00 ",1,7878);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - COLUMNA PASIVA DOBLE 15 DE 4000W 4 OHM - Lps 25,300.00",1,25300);
						break;
					}
					
					case 4:
						{
							audioMenu(opcion);
						}
					default:
					{
						system("cls");
						gotoxy(28,10);cout<<"Opcion no valida";
						gotoxy(20,20);system("pause");
						menuprincipal();
					}
					cout<<"PRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				break;
			}
		case 3:
			{
				gotoxy(30,2); cout<<"PROCESADORES DE AUDIO"<<endl;
			               
				gotoxy(14,6); cout<<"1 - INTERFAZ DE AUDIO FOCUSRITHE 2i2 ---- Lps.2,693"<<endl;
				gotoxy(14,8); cout<<"2 - INTERFAZ DE AUDIO M-TRACK-DUO ------- Lps.4,000"<<endl;
				gotoxy(14,10);cout<<"3 - INTERFAZ DE AUDIO BHERINGHER--------- Lps.2,000"<<endl;
				gotoxy(14,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,14);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - INTERFAZ DE AUDIO FOCUSRITHE 2i2 - Lps 2,693.00",1,2693);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - INTERFAZ DE AUDIO M-TRACK-DUO - Lps 4,000.00 ",1,4000);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - INTERFAZ DE AUDIO BHERINGHER - Lps 2,000.00",1,2000);
						break;
					}
					case 4:
						{
							audioMenu(opcion);
						}
					default:
					{
						system("cls");
						gotoxy(28,10);cout<<"Opcion no valida";
						gotoxy(20,20);system("pause");
						menuprincipal();
					}
					cout<<"\nPRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				system("pause");
				break;
			}		
	}
}
