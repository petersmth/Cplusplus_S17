main: main.o testclass.o function.o
	g++ -std=c++11 main.o testclass.o function.o -o main

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

testclass.o: testclass.cpp
	g++ -std=c++11 -c testclass.cpp

function.o: function.cpp
	g++ -std=c++11 -c function.cpp
