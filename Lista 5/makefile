APPLICATIVO = Hora
CFLAGS = -c -std=c++11
MAIN_NAME = Exercicio001
DASHOES = ${MAIN_NAME}.o Hora.cpp Hora.hpp

all:			${APPLICATIVO}

${APPLICATIVO}:	${DASHOES}
	g++ -o ${APPLICATIVO} ${DASHOES}

${MAIN_NAME}.o: 		${MAIN_NAME}.cpp Hora.cpp Hora.hpp
	g++ ${CFLAGS} ${MAIN_NAME}.cpp

Hora.o:		Hora.cpp Hora.hpp
	g++ ${CFLAGS} Hora.cpp

run:			${APPLICATIVO} 
	./${APPLICATIVO}

clean: 			
	del ${DASHOES} ${APPLICATIVO}