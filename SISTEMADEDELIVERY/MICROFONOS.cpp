#include <iostream>
using namespace std;
extern void imprimirfactura();
extern void menuprincipal();
extern void microfonosMenu(int opcion);
extern void agregarProducto(string descripcion,int cantidad,double precio);
void dibujarCuadro(int x1,int y1,int x2,int y2);
void gotoxy(int x,int y);
void productosMICROFONOS(int opcion)
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
				gotoxy(30,2); cout<<"MICROFONOS ALAMBRICOS"<<endl;
				              
				gotoxy(12,6); cout<<"1 - MICROFONO ALAMBRICOS UNIVERSAL --------------- Lps.403"<<endl;
				gotoxy(12,8); cout<<"2 - MICROFONO ALAMBRICO VOCAL CARDIOIDE DINAMICO - Lps.2,070"<<endl;
				gotoxy(12,10);cout<<"3 - MICROFONO ALAMBRICO SENNHEISER PARA VOCES ---- Lps.3,335"<<endl;
				gotoxy(12,12);cout<<"4 - Volver"<<endl;
				
				 gotoxy(30,16);cout<<"Opcion----->:";
				
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - MICROFONO ALAMBRICO UNIVERSAL - Lps 403.00",1,403);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - MICROFONO ALAMBRICO VOCAL CARDIOIDE DINAMICO - Lps 2,070.00",1,30000);	
						break;
					}
					case 3:
					{	
						agregarProducto("1 - MICROFONO ALAMBRICO SENNHEISER PARA VOCES - Lps 3,335.00",1,3335);	
						break;
					}
					case 4:
						{
							microfonosMenu(opcion);
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
				gotoxy(30,2); cout<<"MICROFONOS INALAMBRICOS"<<endl;
			               
				gotoxy(12,6); cout<<"1 - SET MICROFONOS INALAMBRICOS DOBLE ------- Lps.3,220"<<endl;
				gotoxy(12,8); cout<<"2 - MICROFONO INALAMBRICO DE DIADEMA -------- Lps.3,680"<<endl;
				gotoxy(12,10);cout<<"3 - MICROFONO INALAMBRICO DOBLE MANO -------- Lps.15,300"<<endl;
				gotoxy(12,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,16);cout<<"Opcion---->: ";
				 cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - SET MICROFONOS INALAMBRICOS DOBLE - Lps 3,220.00",1,3220);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - MICROFONO INALAMBRICO DE DIADEMA - Lps 3,680.00 ",1,3680);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - MICROFONO INALAMBRICO DOBLE MANO - Lps 15,300.00",1,15300);
						break;
					}
					
					case 4:
						{
							microfonosMenu(opcion);
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
				gotoxy(30,2); cout<<"MICROFONOS CONDENSADORES"<<endl;
				              
				gotoxy(12,6); cout<<"1 - MICROFONO CONDENSADOR RODE NT1 ----------- Lps.2,500"<<endl;
				gotoxy(12,8); cout<<"2 - MICROFONO CONDENSADOR PRESONUS ----------- Lps.3,000"<<endl;
				gotoxy(12,10);cout<<"3 - MICROFONO CONDENSADOR AUDIOTECHNICA ------ Lps.3,700"<<endl;
				gotoxy(12,12);cout<<"4 - Volver"<<endl;
				gotoxy(30,16);cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - MICROFONO CONDENSADOR RODE NT1 - Lps 2,500.00",1,2500);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - MICROFONO CONDENSADOR PRESONUS- Lps 3,000.00 ",1,3000);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - MICROFONO CONDENSADOR AUDIOTECHNICA - Lps 3,700.00",1,3700);
						break;
					}
					case 4:
						{
							microfonosMenu(opcion);
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
