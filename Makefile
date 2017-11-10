#	Author: John Gibbons
#	Date: 2016.10.26

RunTests: main.o LinkedListOfInts.o TestSuite.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o TestSuite.o -o RunTests

main.o: main.cpp TestSuite.h
	g++ -g -Wall -std=c++11 -c main.cpp

TestSuite.o: TestSuite.h TestSuite.cpp
	g++ -g -Wall -std=c++11 -c TestSuite.cpp

clean:
	rm main.o TestSuite.o *.*~ RunTests
