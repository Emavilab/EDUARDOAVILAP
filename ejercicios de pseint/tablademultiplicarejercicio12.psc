Algoritmo TablaDeMultiplicar
	
	Escribir "Ingrese un número entero del 1 al 12:"
	Leer numero
	
	
		Si numero >= 1 y numero <= 12 Entonces
			
			Escribir "Tabla de multiplicar del número ", numero, ":"
			Para i = 1 Hasta 10 Con Paso 1 Hacer
				resultado = numero * i
				Escribir numero, " x ", i, " = ", resultado
			FinPara
		Sino
			Escribir "El número ingresado está fuera del rango válido."
		FinSi
		
FinAlgoritmo
