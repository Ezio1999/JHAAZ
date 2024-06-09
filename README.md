Algoritmo JHAAZ
	Definir r, dia, horas, personas, m Como Entero
	Definir nombre Como Cadena
	Definir mes Como Cadena
	Escribir '****-BIENVENIDO A JHAAZ-****'
	Repetir
		Escribir 'Que desea hacer?'
		Escribir '1.-RESERVACIONES'
		Escribir '2.-CONSULTAR RESERVACION'
		Leer r
		Según r Hacer
			1:
				Escribir 'RESERVACIONES'
				Escribir 'por favor introduzca el nombre de a quien quedara la reservacion'
				Leer nombre
				Escribir 'para que dia y mes le gustaria reservar ', nombre
				Leer dia
				Leer mes
				Escribir 'introduzca la hora '
				Leer horas
				Escribir 'para cuantas personas sera su mesa?'
				Leer personas
				Escribir 'perfecto, para confirmar'
				Escribir 'la reservacion se hara el dia ', dia, ' de ', mes, ' a las ', horas, ' con mesa para  ', personas, ' personas.'
			2:
				Escribir "para buscar una reservacion por favor introduzca el nombre previamente ingresado"
				Leer nombre
		FinSegún
		Escribir "desea hacer algo mas?"
		Escribir "1=si,2=no"
		Leer m
	Hasta Que m=2
	Escribir 'vuelva pronto :D'
FinAlgoritmo
