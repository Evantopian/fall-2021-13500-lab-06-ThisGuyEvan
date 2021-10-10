OBJECTS = caesar.o vigenere.o decrypt.o 

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS) 
	g++ -o tests tests.o $(OBJECTS)

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o



main.o: main.cpp 

tests.o: tests.cpp doctest.h 

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h

vigenere.o: vigenere.cpp vigenere.h caesar.h

decrypt.o: decrypt.cpp decrypt.h


clean:
	rm -f main main.o tests tests.o test-ascii test-ascii.o $(OBJECTS) 
