Algoritmo culcu2k25
	
	Definir primerValor Como Real
	Definir segundoValor Como Real
	Definir resultado Como Real
	Definir tipoOperacion Como Caracter
	
	Escribir "Hola, bienvenidos a calcu2k25"
	Escribir  "Estos son los unicos operadores permitidos (+ , - , * , /)"
	
	Escribir "Ingrese un primer valor"
	Leer primerValor
	
	Escribir "Ingrese un operador"
	Leer tipoOperacion
	
	Escribir "Ingrese un segundo valor"
	Leer segundoValor
	
	Segun tipoOperacion hacer
		'+':
			resultado <- primerValor+segundoValor
			Escribir "El resultado de la suma es: ", resultado 
		'-':
			resultado <- primerValor-segundoValor
			Escribir "El resultado de la resta es: ", resultado
		'*':
			reslutado <- primerValor*segundoValor
			Escribir "El resultado de la multiplicacion es: ", reslutado
		'/':
			si segundoValor <> 0 Entonces
				resultaado <- primerValor/segundoValor
				Escribir "El resultado de la division es: ", resultado 
			FinSi
	FinSegun
	
	
	
	
	
	
	
	
	
FinAlgoritmo
