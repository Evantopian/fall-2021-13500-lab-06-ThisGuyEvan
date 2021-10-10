OBJECTS = ceasar.o vigenere.o decrypt.o 

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o 
	g++ -o tests tests.o 

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o



main.o: main.cpp 

tests.o: tests.cpp doctest.h 

test-ascii.o: test-ascii.cpp

ceasar.o: ceasar.cpp ceasar.h

vigenere.o: vigenere.cpp vigenere.h ceasar.h

decrypt.o: decrypt.cpp decrypt.h


clean:
	rm -f main main.o  tests.o test-ascii test-ascii.o $(OBJECTS) 
