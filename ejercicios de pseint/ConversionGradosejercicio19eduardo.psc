
	Algoritmo ConversionGrados
	
	Escribir "Elija una opción:"
	Escribir "1. Convertir de Celsius a Fahrenheit"
	Escribir "2. Convertir de Fahrenheit a Celsius"
	Leer opcion
	
	si opcion = 1 Entonces
		Escribir "Ingrese la temperatura en grados Celsius:"
		Leer  celsius
		fahrenheit <- (celsius * 9/5) + 32
		Escribir "La temperatura en grados Fahrenheit es: ", fahrenheit
	SiNo 
		si opcion=2
			Escribir "Ingrese la temperatura en grados Fahrenheit:"
			Leer fahrenheit
			celsius <- (fahrenheit - 32) * 5/9
			Escribir "La temperatura en grados Celsius es: ", celsius
		SiNo
			Escribir "Opción inválida."
			
		FinSi
		
	FinSi
	
	
	
	
FinAlgoritmo


