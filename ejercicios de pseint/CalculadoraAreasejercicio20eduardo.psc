
	Algoritmo CalculadoraAreas
		
		Definir opcion Como Entero
		Definir  base, altura, lado, radio, area Como Real

		Escribir "Bienvenido a la Calculadora de Áreas"
		Escribir "-------------------------------------"
		Escribir "1. Triángulo"
		Escribir "2. Cuadrado" 
		Escribir "3. Rectángulo"
		Escribir "4. Círculo"
		Escribir"-------------------------------------"
		Escribir"Ingrese el número correspondiente a la figura para la cual desea calcular el área:"
		Leer opcion
		
		
		Segun opcion Hacer
			Caso 1:
				
				Escribir "Ingrese la base del triángulo:"
				Leer base
				Escribir "Ingrese la altura del triángulo:"
				Leer altura
				area <- (base * altura) / 2
				Escribir "El área del triángulo es: ", area
				
			Caso 2:
				
				Escribir "Ingrese el lado del cuadrado:"
				Leer lado
				area <- lado * lado
				Escribir "El área del cuadrado es: ", area
				
			Caso 3:
				
				Escribir "Ingrese la base del rectángulo:"
				Leer base
				Escribir "Ingrese la altura del rectángulo:"
				Leer altura
				area <- base * altura
				Escribir "El área del rectángulo es: ", area
				
			Caso 4:
				
				Escribir("Ingrese el radio del círculo:")
				Leer radio
				area <- 3.14159 * radio * radio
				Escribir "El área del círculo es: ", area
				
			De Otro Modo:
				Escribir "Opción inválida"
    FinSegun

FinAlgoritmo

