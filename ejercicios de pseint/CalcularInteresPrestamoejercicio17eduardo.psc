Algoritmo CalcularInteresPrestamo
	
	Escribir "Ingrese el monto del pr�stamo:"
	Leer montoPrestamo
	
	Escribir "Ingrese el n�mero de meses:"
	Leer numMeses
	
	
	tasaInteresMensual <- 2 / 100  
	interesTotal <- montoPrestamo * tasaInteresMensual * numMeses
	
	
	Escribir "El inter�s total a pagar es:", interesTotal
	
FinAlgoritmo


