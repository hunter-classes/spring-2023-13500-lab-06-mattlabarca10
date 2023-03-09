main: main.o caesar.o decrypt.o vigenere.o
	g++ -o main main.o caesar.o decrypt.o vigenere.o

tests: tests.o caesar.o decrypt.o vigenere.o
	g++ -o tests tests.o caesar.o decrypt.o vigenere.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

main.o: main.cpp caesar.h decrypt.h vigenere.h

tests.o: tests.cpp doctest.h caesar.h decrypt.h vigenere.h

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h

decrypt.o: decrypt.cpp decrypt.h

vigenere.o: vigenere.cpp vigenere.h

clean:
	rm -f main tests main.o tests.o test-ascii test-ascii.o caesar.o decrypt.o vigenere.o
