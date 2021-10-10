OBJECTS = main.o ceasar.o vigenere.o 

main: main.o ceasar.o vigenere.o
	g++ -o main $(OBJECTS)

tests: tests.o 
	g++ -o tests tests.o 

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o



main.o: main.cpp 

tests.o: tests.cpp doctest.h 

test-ascii.o: test-ascii.cpp

ceasar.o: ceasar.cpp ceasar.h

vigenere.o: vigenere.cpp vigenere.h ceasar.h


clean:
	rm -f main main.o  tests.o test-ascii test-ascii.o ceasar.o vigenere.o
