Algoritmo cifrasinvertidasejercicio13eduardo
	Escribir "Ingrese Número : "
	Leer Num
	sw = 0
	Cont = 1
	Si Num < 10 Entonces
			Escribir Num
		SiNo
			Mientras sw = 0 Hacer			
				Si Num > (Cont * 10) Entonces
					Cont = Cont * 10
				SiNo
					sw = 1
				Fin Si				
			Fin Mientras	
			X = 1
			Mientras Num > 10			
				R = Num MOD Cont
				D = (Num - R)/ Cont			
				Suma = (D * X) + Suma
				X = X * 10
				Num = R
				Cont = Cont / 10
			FinMientras		
			Escribir (X * R)+ Suma		
		Fin Si		
FinAlgoritmo

