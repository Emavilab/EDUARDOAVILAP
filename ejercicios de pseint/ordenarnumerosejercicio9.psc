Algoritmo ordenarnumeros
	definir n,temp ,vector Como Entero
	Dimension vector[10] 
	Escribir "ingrese 10 numeros: "
	Para n= 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Número ", n, ": "
		Leer vector[n] 
		
	FinPara
	
	
	Para n=1 Hasta 10 Con Paso 1 Hacer
		Para j<-i+1 Hasta 10 Con Paso 1 Hacer
			Si vector[n]>vector[j] Entonces
				temp<-vector[n]
				vector[n]<-vector[j]
				vector[j]<-temp
				
			
			Fin Si
		Fin Para
	Fin Para

	Escribir "numeros ordenados"
	para n=1 Hasta 10 Con Paso 1 Hacer
		Escribir vector[n] 
		 
	FinPara
	
FinAlgoritmo
