#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	int dado1 = 0, dado2 = 0;
	int continuar = 1 ;
	int continuar2 = 1;
	char lanzar = 'L';
	srand(time(NULL));
	do{
			system("color 03");
			cout<<"BIENVENIDO AL JUEGO DE LOS DADOS"<<endl;
			cout<<"Para lanzar los dados toca la letra L de tu teclado: ";
			cin>>lanzar;
			if(lanzar == 'L' or lanzar == 'l' )
				{	
					dado1 = rand() % 6 + 1;
					cout<<"\nResultado dado 1: "<<dado1<<endl;
					dado2 = rand() % 6 + 1;
					cout<<"\nResultado dado 2: "<<dado2<<endl;	
				}
			else if (lanzar != 'l' or lanzar != 'L')
				{
					system("cls");
					cout<<"Letra incorrecta"<<endl;	
					system("color 04");	
				}
					cout<<"\nDesea volver a lanzar los dados?";
					cout<<"\nPresione \n1)Volver a lanzar \n2) Salir del juego"<<endl;
					cout<<"Opcion ----->: ";
					cin>>continuar;	
					system("cls");		
	}while(continuar == 1);
		system("cls");
		system("color 04");
		cout<<"Usted salio del juego :)";
		
	return 0;
}

