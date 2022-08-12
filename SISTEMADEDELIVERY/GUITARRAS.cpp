#include <iostream>
using namespace std;
extern void imprimirfactura();
extern void menuprincipal();
extern void guitarrasMenu(int opcion);
extern void agregarProducto(string descripcion,int cantidad,double precio);
void dibujarCuadro(int x1,int y1,int x2,int y2);
 void gotoxy(int x,int y);
void productosGuitarras(int opcion)
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
				gotoxy(30,2); cout<<"GUITARRAS ELECTRICAS"<<endl;
			
				gotoxy(18,6); cout<<"1 - GUITARRA ELECTRICA ONYX --------- Lps.4,500"<<endl;
				gotoxy(18,8); cout<<"2 - GUITARRA ELECTRICA SX------------ Lps.3,500"<<endl;
				gotoxy(18,10); cout<<"3 - GUITARRA ELECTRICA FENDER-------- Lps.3,800"<<endl;
				gotoxy(18,12); cout<<"4 - GUITARRA ELECTRICA PACIFIC YAMAHA-Lps.7,500"<<endl;
				gotoxy(18,14); cout<<"5 - Volver"<<endl;
				
				gotoxy(30,16); cout<<"Opcion----->:";
				
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - GUITARRA ELECTRICA ONYX - Lps 4,500.00",1,4500);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - GUITARRA ELECTRICA SX - Lps 3,500.00",1,3500);	
						break;
					}
					case 3:
					{
						agregarProducto ("1 - GUITARRA ELECTRICA FENDER - Lps 3,800.00",1,3800);
						break;		
					}
					case 4:
					{
						agregarProducto ("1 - GUITARRA ELECTRICA PACIFIC YAMAHA - Lps 7,500.00",1,7500);
						break;	
					}
					case 5:
						{
							guitarrasMenu(opcion);
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
			
				gotoxy(28,18);cout<<"PRODUCTO AGREGADO"<<endl;
				gotoxy(20,20);system("pause");
				break;
			}
		case 2:
			{
				gotoxy(30,2); cout<<"GUITARRAS ACUSTICAS"<<endl;
				
				gotoxy(18,6); cout<<"1 - GUITARRA CLASICA 36' ONYX ------ Lps.1,595"<<endl;
				gotoxy(18,8); cout<<"2 - GUITARRA CLASICA VALENCIA 36---- Lps.1,500"<<endl;
				gotoxy(18,10);cout<<"3 - GUITARRA CLASICA 39' FLORENCIA-- Lps.1,783"<<endl;
				gotoxy(18,12);cout<<"4 - GUITARRA CLASICA PALMER -------- Lps.4,800"<<endl;
				gotoxy(18,14);cout<<"5 - Volver"<<endl;
				gotoxy(30,16);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - GUITARRA CLASICA 36' ONYX"" - Lps 1,595.00",1,1595);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - GUITARRA CLASICA VALENCIA 36 - Lps 1,500.00 ",1,1500);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - GUITARRA CLASICA 39' FLORENCIA - Lps 1,783.00",1,1783);
						break;
					}
					case 4:
					{
						agregarProducto("1 - GUITARRA CLASICA PALMER - Lps 4,800.00",1,4800);
						break;		
					}
					case 5:
						{
							guitarrasMenu(opcion);
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
				gotoxy(28,18);cout<<"PRODUCTO AGREGADO"<<endl;
				gotoxy(20,20);system("pause");
				break;
				
				
			}
		case 3:
			{
				gotoxy(30,2); cout<<"GUITARRAS ELECTROACUSTICAS"<<endl;
			               
				gotoxy(6,6); cout<<"1 - GUITARRA ELECTROACUSTICA NYLON DELTA WOODS CUTAWAY - Lps.5,693"<<endl;
				gotoxy(6,8); cout<<"2 - GUITARRA ELECTROACUSTICA 39 CUTAWAY ---------------- Lps.3,795"<<endl;
				gotoxy(6,10);cout<<"3 - GUITARRA ELECTROACUSTICA YAMAHA--------------------- Lps.6,038"<<endl;
				gotoxy(6,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,14);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - GUITARRA ELECTROACUSTICA NYLON DELTA WOODS CUTAWAY - Lps 5,693.00",1,5693);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - GUITARRA ELECTROACUSTICA 39 CUTAWAY - Lps 3,795.00 ",1,3795);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - GUITARRA ELECTROACUSTICA YAMAHA - Lps 6,038.00",1,6038);
						break;
					}
					case 4:
						{
							guitarrasMenu(opcion);
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
				gotoxy(28,18);cout<<"PRODUCTO AGREGADO"<<endl;
				gotoxy(20,20);system("pause");
				break;
			}		
	}
}
