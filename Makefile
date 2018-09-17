main: main.o pig.o
	g++ -o main main.o pig.o
main.o: main.cpp pig.h
	g++ -c main.cpp
pig.o: pig.cpp pig.h
	g++ -c pig.cpp
tests: tests.o pig.o
	g++ -o tests tests.o pig.o
tests.o: tests.cpp
	g++ -c tests.cpp
clean:
	rm -f tests.o pig.o main.o
