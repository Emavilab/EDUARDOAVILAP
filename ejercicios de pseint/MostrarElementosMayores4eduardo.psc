Algoritmo MostrarElementosMayores
Dimension  arreglo[10]  
Definir Limite, elementoNumero  Como Entero  
limite <- 5 
Escribir "Ingrese los elementos:"

		Para i <- 1 Hasta 10 Hacer  
			Escribir "Elemento ", i, ":"
			Leer arreglo[i]  
		FinPara
		
		Escribir "Los elementos mayores que ", limite, " son:"
		
		Para i <- 1 Hasta 10 Hacer  
			elementoComoNumero <- arreglo[i]  
			Si elementoComoNumero > limite Entonces
				Escribir arreglo[i]  
			FinSi
		FinPara
		
FinAlgoritmo

