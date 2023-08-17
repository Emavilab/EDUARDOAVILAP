Algoritmo ejercicio5eduardoa
	
	Definir num, i como Entero;
	Definir cadena como Caracter;
	cadena <- "";
	Para i <- 1 Hasta 5 Con Paso 1  Hacer
			Escribir "Ingrese un número : ";
			Leer num;
			Si num > 0 Entonces				
				cadena <- Concatenar(cadena,ConvertirATexto(num));				
			FinSi
		FinPara
		Escribir cadena;
FinAlgoritmo


