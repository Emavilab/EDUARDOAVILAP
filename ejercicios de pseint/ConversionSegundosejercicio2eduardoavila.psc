Algoritmo ConversionSegundos
		Definir totalSegundos, horas, minutos, segundos Como Real
		
		Escribir "Ingrese el número total de segundos:"
		Leer totalSegundos
		
		horas <- totalSegundos / 3600
		minutos <- (totalSegundos MOD 3600) / 60
		segundos <- (totalSegundos MOD 3600) MOD 60
		Escribir "EL TIEMPO ES: " ,trunc(horas), ":", trunc(minutos),":",segundos,"hrs"
		
		
FinAlgoritmo

