
	Algoritmo CalcularEdad
		Definir diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual, edad Como Entero
		
		Escribir "Ingrese la fecha de nacimiento:"
		Escribir "D�a:"
		Leer diaNacimiento
		Escribir "Mes:"
		Leer mesNacimiento
		Escribir "A�o:"
		Leer anioNacimiento
		
		Escribir "Ingrese la fecha actual:"
		Escribir "D�a:"
		Leer diaActual
		Escribir "Mes:"
		Leer mesActual
		Escribir "A�o:"
		Leer anioActual
		
		edad <- anioActual - anioNacimiento
		
		Si mesActual < mesNacimiento Entonces
			edad <- edad - 1
		Fin Si
		
		Si mesActual = mesNacimiento Y diaActual < diaNacimiento Entonces
			edad <- edad - 1
		Fin Si
		
		Escribir "La edad de la persona es:", edad, "a�os."
FinAlgoritmo

