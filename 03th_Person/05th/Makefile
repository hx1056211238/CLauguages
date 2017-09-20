Person:main.o Person.o dog.o
	g++ -o $@ $^

%.o:%.cpp
	g++ -c -o $@ $<

clean:
	rm -rf *.o Person
