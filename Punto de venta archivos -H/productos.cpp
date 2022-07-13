#include <iostream>
#include "factura.h"

using namespace std;


void productos(int opcion)
{	system ("cls");
	int opcionProducto = 0;
	
	switch (opcion)
	{
		case 1:
			{
				cout<<"BEBIDAS CALIENTES"<<endl;
				cout<<"*****************"<<endl;
				cout<<"1 - Capuccino"<<endl;
				cout<<"2 - Expresso"<<endl;
				cout<<"3 - Chocolate Caliente"<<endl;
				cout<<endl;
				
				cout<<"Opcion----->:";
				
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - Capuccino - Lps 40.00",1,40);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - Expresso - Lps 30.00",1,30);	
						break;
					}
					case 3:
						agregarProducto ("1 - Chocolante caliente - Lps 25.00",1,25);
						break;
					default:
					{
						cout<<"Opcion no valida";
						break;
						return;
					}
					break;
				}
				cout<<"\nPRODUCTO AGREGADO"<<endl;
				system("pause");
				break;
			}
		case 2:
			{
				cout<<"BEBIDAS FRIAS"<<endl;
				cout<<"*************"<<endl;
				cout<<"1 - Limonada"<<endl;
				cout<<"2 - Te helado"<<endl;
				cout<<"3 - Ponche"<<endl;
				
				cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - Limonada - Lps 20.00",1,20);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - Te helado - Lps 20.00 ",1,20);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - Ponche - Lps 15.00",1,15);
						break;
					}
					default:
					{
						cout<<"Opcion no valida";
						return ;
						break;
					}
					cout<<"\nPRODUCTO AGREGADO"<<endl;
					system("pause");
					break;
				}
				break;
			}
		case 3:
			{
				cout<<"REPOSTERIA"<<endl;
				cout<<"*************"<<endl;
				cout<<"1 - Pastel tres leche"<<endl;
				cout<<"2 - Galletas de chocolate"<<endl;
				cout<<"3 - Pastel de chocolate"<<endl;
				
				cout<<"Opcion---->: ";
				cin>>opcionProducto;
				switch(opcionProducto)
				{
				
					case 1:
					{
						agregarProducto("1 - Pastel tres leche - Lps 150.00",1,150);	
						break;
					}
					case 2:
					{	
						agregarProducto("1 - Paquete de galletas - Lps 25.00 ",1,25);	
						break;
					}
					case 3:
					{
						agregarProducto("1 - Pastel de chocolate - Lps 100.00",1,100);
						break;
					}
					default:
					{
						cout<<"Opcion no valida";
						return ;
						break;
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
