Algoritmo TablaDeMultiplicar
	
	Escribir "Ingrese un n�mero entero del 1 al 12:"
	Leer numero
	
	
		Si numero >= 1 y numero <= 12 Entonces
			
			Escribir "Tabla de multiplicar del n�mero ", numero, ":"
			Para i = 1 Hasta 10 Con Paso 1 Hacer
				resultado = numero * i
				Escribir numero, " x ", i, " = ", resultado
			FinPara
		Sino
			Escribir "El n�mero ingresado est� fuera del rango v�lido."
		FinSi
		
FinAlgoritmo
