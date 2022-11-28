#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

struct videojuegos {
	float precio_total;
	int precio, anio, precio_impuesto, iva, id;
	string nombre_juego, descripcion, caracteristica, clasificacion, genero;
} datjuegos[3];



void Archivo();

int numero_articulo = 0;


int main()
{
	int num_juego=0;
	int i, mnindex, modjuegos;
	//mnindex servira como flujo de opciones 

	while(true) {
		cout << "***********MOON GAMES************" << endl;
		cout << "------------MENU---------------\n";
		cout << "1.Agregar Articulo\n";
		cout << "2.Mostrar Articulo\n";
		cout << "3.Modificar Articulo\n";
		cout << "4.Eliminar Articulo\n";
		cout << "5.Limpiar pantalla\n";
		cout << "6.Salir\n";
		cout << "\n";
		cout << "\n";
		cout << "Eliga una opcion para continuar..\n";
		cin >> mnindex;

		if (mnindex == 1)
		{
			cin.ignore();
			for (i = 0; i <= 3; i++)
			{
				cout << "Ingrese nombre del videojuego:\n";
				getline(cin, datjuegos[i].nombre_juego);
				cout << "Ingrese caracteristica del videojuego: \n";
				getline(cin, datjuegos[i].caracteristica);
				cout << "Ingrese descripcion del videojuego: \n";
				getline(cin, datjuegos[i].descripcion);
				cout << "Ingrese clasificacion del videojuego: \n";
				getline(cin,datjuegos[i].clasificacion);
				cout << "Ingrese genero del videojuego: \n";
				getline(cin,datjuegos[i].genero);
				cout << "Ingrese precio del videojuego: \n";
				cin>>datjuegos[i].precio;
				cin.ignore();
				datjuegos[i].precio_impuesto = (datjuegos[i].precio * 0.16);
				datjuegos[i].precio_total = (datjuegos[i].precio + datjuegos[i].precio_impuesto);
				cout << "\tEl costo del IVA es de:\t  " << datjuegos[i].precio_impuesto << endl;
				cout << "\tEl precio total es de: \t" << datjuegos[i].precio_total << endl;
				cout << "Ingrese año del videojuego:" << endl;
				cin >>datjuegos[i].anio;
				cout << "\n\n";
				cin.ignore();
			}

		}

		if (mnindex == 2)
		{
			for (i = 0; i <= 3; i++)
			{
				system("cls");
				cout << "JUEGO 1" << endl;
				cout << "1.Nombre del juego: " << datjuegos[0].nombre_juego << endl;
				cout << "2.Caracteristica: " << datjuegos[0].caracteristica << endl;
				cout << "3.Descripcion: " << datjuegos[0].descripcion << endl;
				cout << "4.Clasificacion: " << datjuegos[0].clasificacion << endl;
				cout << "5.Genero: " << datjuegos[0].genero << endl;
				cout << "6.Precio: " << datjuegos[0].precio << endl;
				cout << "7.Año: " << datjuegos[0].anio << endl;
				cout << "\tEl costo del IVA es de:\t  " << datjuegos[0].precio_impuesto;
				cout << "\tEl precio total es de: \t" << datjuegos[0].precio_total;
				cout << "\n\n";

				cout << "JUEGO 2" << endl;
				cout << "1.Nombre del juego: " << datjuegos[1].nombre_juego << endl;
				cout << "2.Caracteristica: " << datjuegos[1].caracteristica << endl;
				cout << "3.Descripcion: " << datjuegos[1].descripcion << endl;
				cout << "4.Clasificacion: " << datjuegos[1].clasificacion << endl;
				cout << "5.Genero: " << datjuegos[1].genero << endl;
				cout << "6.Precio: " << datjuegos[1].precio << endl;
				cout << "7.Año: " << datjuegos[1].anio << endl;
				cout << "\tEl costo del IVA es de:\t  " << datjuegos[1].precio_impuesto;
				cout << "\tEl precio total es de: \t" << datjuegos[1].precio_total;
				cout << "\n\n";

				cout << "JUEGO 3" << endl;
				cout << "1.Nombre del juego: " << datjuegos[2].nombre_juego << endl;
				cout << "2.Caracteristica: " << datjuegos[2].caracteristica << endl;
				cout << "3.Descripcion: " << datjuegos[2].descripcion << endl;
				cout << "4.Clasificacion: " << datjuegos[2].clasificacion << endl;
				cout << "5.Genero: " << datjuegos[2].genero << endl;
				cout << "6.Precio: " << datjuegos[2].precio << endl;
				cout << "7.Año: " << datjuegos[2].anio << endl;
				cout << "\tEl costo del IVA es de:\t  " << datjuegos[2].precio_impuesto;
				cout << "\tEl precio total es de: \t" << datjuegos[2].precio_total;
				cout << "\n\n";

				cout << "JUEGO 4" << endl;
				cout << "1.Nombre del juego: "<< datjuegos[3].nombre_juego << endl;
				cout << "2.Caracteristica: " << datjuegos[3].caracteristica << endl;
				cout << "3.Descripcion: " << datjuegos[3].descripcion << endl;
				cout << "4.Clasificacion: " << datjuegos[3].clasificacion << endl;
				cout << "5.Genero: " << datjuegos[3].genero << endl;
				cout << "6.Precio: " << datjuegos[3].precio << endl;
				cout << "7.Año: " << datjuegos[3].anio << endl;
				cout << "\tEl costo del IVA es de:\t  " << datjuegos[3].precio_impuesto;
				cout << "\tEl precio total es de: \t" << datjuegos[3].precio_total;
				cout << "\n\n";



			}
		}



		if (mnindex == 3)
		{
			int opmod;
			int op2;
			cout << "Ingrese el el numero para modificar el videojuego\n";//con numero se refiere si es juego 1, juego 2 etc, al seleccionar te arrojara 
			//el despliegue de datos en donde escogeras cual es la opcion que quieres modificar ya sea el nombre, caracteristica etc.
			cin >> opmod;

			for (i = 1; i <= 7; i++)
			{
					cout << "Despliegue de datos\n";
					cout << "1.Nombre del juego: " << endl;
					cout << "2.Caracteristica: " << endl;
					cout << "3.Descripcion: " << endl;
					cout << "4.Clasificacion: " << endl;
					cout << "5.Genero: " << endl;
					cout << "6.Precio" << endl;
					cout << "7.Año" << endl;
                    cin >> opmod; //esta es la opcion del numero del juego que se quiere modificar
					cin.ignore();
					switch (opmod)
					{
					case 1:
					{
			
						cout << "Ingrese el nuevo nombre del videojuego" << endl;
						cin >> datjuegos[i].nombre_juego;
						break;
					}
					case 2:
					{
						cout << "Ingrese la nueva caracteristica del videojuego\n";
						cin >> datjuegos[i].caracteristica;
						break;
					}
					case 3:
					{
						cout << "Ingrese la nueva descripcion del videojuego\n";
						cin >> datjuegos[i].descripcion;
						break;
					}
					case 4:
					{
						cout << "Ingrese la nueva clasificacion del videojuego\n";
						cin >> datjuegos[i].clasificacion;
						break;
					}
					case 5:
					{
						cout << "Ingrese el nuevo genero del videojuego\n";
						cin >> datjuegos[i].genero;
						break;
					}
					case 6:
					{
						cout << "Ingrese el nuevo precio del videojuego\n";
						cin >> datjuegos[i].precio;
						break;
					}
					case 7:
					{
						cout << "Ingrese el nuevo año del videojuego\n";
						cin >> datjuegos[i].anio;
						cout << "Su juego ha sido modificado" << endl;
						break;
						
					}
					default:
						cout << "Opcion incorrecta\n";
						break;
					}
					
				

			}
		}



		if (mnindex == 4){

				cout << "Ingrese el id del videojuego a eliminar" << endl;
				cin >> numero_articulo;
				numero_articulo = numero_articulo - 1;
				datjuegos[numero_articulo].nombre_juego = "";
				datjuegos[numero_articulo].caracteristica = "";
				datjuegos[numero_articulo].descripcion = "";
				datjuegos[numero_articulo].clasificacion = "";
				datjuegos[numero_articulo].genero = "";
				datjuegos[numero_articulo].precio = 0;
				datjuegos[numero_articulo].precio_impuesto = 0;
				datjuegos[numero_articulo].precio_total = 0;
				cout << "El videojuego a sido eliminado" << endl;


			
		}


		if (mnindex == 5) {

			system("cls");
		}




		if (mnindex == 6)
		{
			Archivo();
			exit(0);
			break;

		}


		
	}
}

void Archivo() 
{
	ofstream guardar;
	string lista;
	lista = "Lista de Juegos";

	guardar.open(lista.c_str(), ios::out);

	if (guardar.fail()) 
	{

		cout << "El archivo ha fallado\n";
		exit(1);
	}

	for (int i = 0; i < 3; i++)
	{
		guardar << "Nombre del juego:" << datjuegos[i].nombre_juego << endl;
		guardar << "Caracteristicas:" << datjuegos[i].caracteristica << endl;
		guardar << "Descripcion:" << datjuegos[i].descripcion << endl;
		guardar << "Clasificacion:" << datjuegos[i].clasificacion << endl;
		guardar << "Genero:" << datjuegos[i].genero << endl;
		guardar << "Precio:" << datjuegos[i].precio << endl;
		guardar << "Anio:" << datjuegos[i].anio << endl;
	}
	guardar.close();

}