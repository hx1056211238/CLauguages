Person:main.o Person.o
	g++ -o $@ $^

%.o:%.cpp
	g++ -c -o $@ $<

clean:
	rm -rf %.o Person
