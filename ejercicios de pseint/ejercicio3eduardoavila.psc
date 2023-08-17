Algoritmo ejercicio3
	Definir array Como Entero
	Definir positivos como entero
	Definir negativos como entero
	Definir nulos como entero 
	positivos=0
	negativos=0
	nulos=0
	
	Escribir "ingrese la cantidad de numeros"
	Leer cant
	Dimension  array[10]
	Para i<-1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese el valor ", i, ":"
		Leer array[i]
		Si array[i] > 0 Entonces
			positivos <- positivos + 1
		SiNo
			si array[i] < 0 Entonces
				negativos <- negativos +1
			SiNo
				nulos<-nulos+1
			FinSi
			
		Fin Si
		
		
	FinPara
	Escribir " ingreso ", positivos," Numeros positivos"
	Escribir "ingreso ", negativos," numeros negativos"
	Escribir "ingreso ", nulos," ceros"
	
FinAlgoritmo
