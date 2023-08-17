
	Algoritmo CalcularEdad
		Definir diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual, edad Como Entero
		
		Escribir "Ingrese la fecha de nacimiento:"
		Escribir "Día:"
		Leer diaNacimiento
		Escribir "Mes:"
		Leer mesNacimiento
		Escribir "Año:"
		Leer anioNacimiento
		
		Escribir "Ingrese la fecha actual:"
		Escribir "Día:"
		Leer diaActual
		Escribir "Mes:"
		Leer mesActual
		Escribir "Año:"
		Leer anioActual
		
		edad <- anioActual - anioNacimiento
		
		Si mesActual < mesNacimiento Entonces
			edad <- edad - 1
		Fin Si
		
		Si mesActual = mesNacimiento Y diaActual < diaNacimiento Entonces
			edad <- edad - 1
		Fin Si
		
		Escribir "La edad de la persona es:", edad, "años."
FinAlgoritmo

