#include <iostream>
using namespace std;
extern void imprimirfactura();
extern void menuprincipal();
extern void tecladosMenu(int opcion);
extern void agregarProducto(string descripcion,int cantidad,double precio);
void dibujarCuadro(int x1,int y1,int x2,int y2);
 void gotoxy(int x,int y);
void productosTECLADOS(int opcion)
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
				gotoxy(36,2); cout<<"TECLADOS"<<endl;
			               
				gotoxy(14,6); cout<<"1 - TECLADO DE 61 TECLAS YAMAHA ------------ Lps.4,200"<<endl;
				gotoxy(14,8); cout<<"2 - TECLADO DE 71 TECLAS YAMAHA ------------ Lps.14,000"<<endl;
				gotoxy(14,10);cout<<"3 - Volver"<<endl;
			
				gotoxy(18,14);cout<<"Opcion----->:";
				              
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - TECLADO DE 61 TECLAS YAMAHA - Lps 4,200.00",1,4200);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - TECLADO DE 71 TECLAS YAMAHA - Lps 14,000.00",1,14000);	
						break;
					}
					case 3:
						{
							tecladosMenu(opcion);
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
				gotoxy(36,2); cout<<"PIANOS"<<endl;
		                
				gotoxy(12,6); cout<<"1 - PIANO DIGITAL PRIVIA 88 TECLAS -------------- Lps.25,475"<<endl;
				gotoxy(12,8); cout<<"2 - PIANO CLASICO PRIVIA 88 TECLAS---- ---------- Lps.35,878"<<endl;
				gotoxy(12,10);cout<<"3 - PIANO CLASICO PRIVIA PERSONALIZADO 88 TECLAS- Lps.25,300"<<endl;
				gotoxy(12,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,14);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - PIANO DIGITAL PRIVIA 88 TECLAS - Lps 25,475.00",1,25475);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - PIANO CLASICO PRIVIA 88 TECLAS - Lps 35,878.00 ",1,35878);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - PIANO CLASICO PRIVIDA PERSONALIZADO 88 TECLAS - Lps 25,300.00",1,25300);
						break;
					}
					
					case 4:
						{
							tecladosMenu(opcion);
						}
					default:
					{
						system("cls");
						gotoxy(28,10);cout<<"Opcion no valida";
						gotoxy(20,20);system("pause");
						menuprincipal();
					}
					
				}
				gotoxy(28,18);cout<<"PRODUCTO AGREGADO"<<endl;
				gotoxy(20,20);system("pause");
				break;
				
			}
		case 3:
			{
				gotoxy(36,2); cout<<"ACCESORIOS"<<endl;
				              
				gotoxy(12,6); cout<<"1 - CABLE PARA PARLANTE 1/4 A 1/4 20FT------- Lps.403"<<endl;
				gotoxy(12,8); cout<<"2 - STAND PARA BOCINA ----------------------- Lps.800"<<endl;
				gotoxy(12,10);cout<<"3 - CABLE PARA BOCINA SPEAKON A SPEAKON 25FT- Lps.690"<<endl;
				gotoxy(12,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,14);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - CABLE PARA PARLANTE 1/4 A 1/4 20FT - Lps 403.00",1,403);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - STAND PARA BOCINA - Lps 800.00 ",1,800);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - CABLE PARA BOCINA SPEAKON A SPEAKON 25FT - Lps 690.00",1,690);
						break;
					}
					case 4:
						{
							tecladosMenu(opcion);
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
