
	Algoritmo OperacionesMatematicas
		Definir num1, num2, resultado Como Real
		Definir operador Como Caracter
		
		
		Escribir "Ingrese el primer n�mero: "
		Leer num1
		
		Escribir "Ingrese el segundo n�mero: "
		Leer num2
		
		Escribir "Ingrese el operador (+, -, x, /, mod): "
		Leer operador
		
		Segun operador Hacer
			Caso "+":
				resultado <- num1 + num2
				Escribir "La suma de ", num1, " + ", num2, " es igual a ", resultado
			Caso "-":
				resultado <- num1 - num2
				Escribir "La resta de ", num1, " - ", num2, " es igual a ", resultado
			Caso "x":
				resultado <- num1 * num2
				Escribir "El producto de ", num1, " por ", num2, " es igual a ", resultado
			Caso "/":
				Si num2 <> 0 Entonces
					resultado <- num1 / num2
					Escribir "La divisi�n de ", num1, " entre ", num2, " es igual a ", resultado
				Sino
					Escribir "No se puede dividir entre cero."
				FinSi
			Caso "mod":
				resultado <- num1 % num2
				Escribir "El m�dulo de ", num1, " entre ", num2, " es igual a ", resultado
			De Otro Modo:
				Escribir "Operador inv�lido."
		FinSegun
FinAlgoritmo

