#include<iostream>
using namespace std;

int main(){
	int num1, num2, operador;
	cout << "Ingrese Numero 1 : ";
	cin >> num1;
	cout << "Ingrese Numero 2 : ";
	cin >> num2;
	cout << "Ingrese Operador (1. + , 2. - , 3. x, 4. /) : ";
	cin >> operador;
	switch(operador){
	case 1:
		cout << endl << "SUMA	: " << (num1+num2) << endl;
		break;
	case 2:		
		cout << endl << "RESTA	: " << (num1-num2) << endl;
		break;
	case 3:		
		cout << endl << "MULTIPLICACION	: " << (num1*num2) << endl;
		break;
	case 4:		
		cout << endl << "DIVISION	: " << (num1/num2) << endl;
		break;	
	default:
		cout << endl << "OPERADOR INCORRECTO" << (num1+num2) << endl;				
	}	
	return 0;
}
