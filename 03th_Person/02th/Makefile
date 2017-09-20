


Person:main.c Person.o
	g++ -o $@ $^

%.o :%.cpp
	g++ -c -o $@ $<
clean:
	rm -rf *.o Person
#Person.o :Person.cpp
#	g++ -c -o $@ $<	
