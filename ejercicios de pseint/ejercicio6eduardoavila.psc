Algoritmo ejercicio6eduardoavila
	
	Escribir "TAMA�O DEL VECTOR : "
	Leer N	
	Dimension vector[N]
	Para f = 1 Hasta N Con Paso 1 Hacer
			vector[f] = Azar(50)
			Escribir Sin Saltar vector[f], " "
		FinPara
		Escribir " "
		Escribir " "
		Escribir "N�MERO PRIMOS"
		Para f = 1 Hasta N Con Paso 1 Hacer
			r = 0;		
			Para p = 1 Hasta vector[f] Con Paso 1 Hacer
				Si (vector[f] mod p == 0) Entonces
					r = r + 1
				FinSi					
			FinPara				
			Si (r == 2) Entonces
				Escribir Sin Saltar vector[f], " "
				suma = suma + 1
			FinSi		
		FinPara
		Escribir " "
		Escribir " "	
		Escribir "TOTAL DE N�MERO PRIMOS : ", suma
		Escribir " "
FinAlgoritmo

