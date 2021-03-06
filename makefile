all: exe


exe: _mainTester.o CPU.o CPUProgram.o Memory.o Computer.o
	g++ _mainTester.o CPU.o CPUProgram.o Memory.o Computer.o -o exe

_mainTester.o: _mainTester.cpp
	g++ -c _mainTester.cpp --std=c++11

CPU.o: CPU.cpp
	g++ -c CPU.cpp --std=c++11

CPUProgram.o: CPUProgram.cpp
	g++ -c CPUProgram.cpp --std=c++11

Memory.o: Memory.cpp
	g++ -c Memory.cpp --std=c++11

Computer.o: Computer.cpp
		g++ -c Computer.cpp --std=c++11

clean:
	rm *.o exe
