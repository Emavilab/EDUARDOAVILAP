
	Algoritmo SumaNumerosNaturales
		Definir N, suma, contador como Entero
		
		Escribir "Ingrese el n�mero l�mite N: "
		Leer N
		
		suma <- 0
		contador <- 1
		
		Mientras contador <= N Hacer
			suma <- suma + contador
			contador <- contador + 1
		Fin Mientras
		
		Escribir "La suma de los ", N, " primeros n�meros naturales es: ", suma
FinAlgoritmo


