Algoritmo CalcularInteresPrestamo
	
	Escribir "Ingrese el monto del préstamo:"
	Leer montoPrestamo
	
	Escribir "Ingrese el número de meses:"
	Leer numMeses
	
	
	tasaInteresMensual <- 2 / 100  
	interesTotal <- montoPrestamo * tasaInteresMensual * numMeses
	
	
	Escribir "El interés total a pagar es:", interesTotal
	
FinAlgoritmo


