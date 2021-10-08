OBJECTS = main.o ceasar.o 

main: main.o ceasar.o
	g++ -o main $(OBJECTS)

tests: tests.o 
	g++ -o tests tests.o 

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o



main.o: main.cpp 

tests.o: tests.cpp doctest.h 

test-ascii.o: test-ascii.cpp

ceasar.o: ceasar.cpp ceasar.h


clean:
	rm -f main main.o  tests.o test-ascii test-ascii.o ceasar ceasar.o
