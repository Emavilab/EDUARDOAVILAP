#include <iostream>

int main() {
    int anionacimiento, mesnacimiento, dianacimiento;
    int anioactual, mesactual, diaactual;

   
    std::cout << "Ingrese la fecha de nacimiento (dia/mes/año): ";
    std::cin >> dianacimiento  >> mesnacimiento >> anionacimiento  ;

    
    std::cout << "Ingrese la fecha actual (dia/mes/año): ";
    std::cin >> diaactual >> mesactual >> anioactual ;

    
    int edad = anioactual - anionacimiento;

    
    if (mesactual < mesnacimiento || (mesactual == mesnacimiento && diaactual < dianacimiento )) {
        edad--;
    }

   
    std::cout << "La edad es: " << edad << " años." << std::endl;

    return 0;
}
	
