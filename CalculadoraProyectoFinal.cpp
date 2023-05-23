#include <iostream>
using namespace std;

int main() {

	int menu;
	bool mantener = true;

	do {
		cout << "\n ------ CALCULADORA INFIJO A POSFIJO ------ " << endl;
		cout << "\nElija la opcion que desea usar:\n" << endl;
		cout << "1) Insertar una expresion aritmetica (infijo)" << endl;
		cout << "2) Mostrar la expresion en infijo" << endl;
		cout << "3) Transformar de infijo a posfijo" << endl;
		cout << "4) Mostrar la expresion en posfijo" << endl;
		cout << "5) Asignar valores a los operandos" << endl;
		cout << "6) Evaluar la expresion en posfijo" << endl;
		cout << "7) Salir \n" << endl;
		cout << "Opcion elegida: ";

		cin >> menu;

		switch (menu)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			mantener = false;
			break;
		default:
			cout << "Elija una opcion del 1 al 7\n" << endl;
			break;

		}
	} while (mantener);

	return 0;
}
