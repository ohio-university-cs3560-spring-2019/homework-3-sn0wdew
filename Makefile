# Define Variables
CXX := g++#Default C++ Compilier
CXXFLAGS := -g -Wall
# LDFLAGS := -L"lib" #linking cflag variables
# LDLIBS := -l "include" #all my .a

prog1: ./bin/main_broken.o ./lib/include.a
	$(CXX) $(CXXFLAGS) ./bin/main_broken.o ./lib/include.a -o prog1
# $(CXX) $(CXXFLAGS) ./bin/main.o -L"lib" -l"include" -o prog1

./bin/main_broken.o: ./src/main_broken.cpp
	cd ./bin; \
	$(CXX) $(CXXFLAGS) ../src/main_broken.cpp -c

./lib/include.a: ./bin/hw_fixed.o
	cd ./lib; \
	ar rcv include.a ../bin/*.o

./bin/hw_fixed.o: ./src/hw_fixed.cc
	cd ./bin; \
	$(CXX) $(CXXFLAGS) ../src/hw_fixed.cc -c

clean:
	cd ./bin; \
	rm -f *.o
	rm -f prog1
