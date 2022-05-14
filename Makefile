main: main.o board.o
	g++ -o main main.o board.o

board.o: board.cpp board.h
main.o: main.cpp board.h

clean: 
	rm -f main.o board.o main