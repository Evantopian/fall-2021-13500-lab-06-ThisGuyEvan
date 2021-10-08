main: main.o 
	g++ -o main main.o 

tests: tests.o 
	g++ -o tests tests.o 

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o


main.o: main.cpp 

tests.o: tests.cpp doctest.h 

test-ascii.o: test-ascii.cpp

clean:
	rm -f main main.o  tests.o test-ascii test-ascii.o
