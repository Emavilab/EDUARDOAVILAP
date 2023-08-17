Algoritmo tecladosacomprar
	
	Definir cantidadTeclados, costoPorTeclado, totalAPagar como Entero
	
	Escribir "Ingrese la cantidad de teclados a comprar: "
	Leer cantidadTeclados
	Si  cantidadTeclados > 8 Entonces
		costoPorTeclado <- 85
	SiNo
		Si cantidadTeclados >= 4 Entonces
			costoPorTeclado <- 90
		SiNo
			costoPorTeclado <- 100
		Fin Si
	Fin Si

	
	totalAPagar <- cantidadTeclados * costoPorTeclado
	
	Escribir "Número de teclados a comprar: ", cantidadTeclados
	Escribir "Total a pagar: ", totalAPagar, " lempiras"
FinAlgoritmo

