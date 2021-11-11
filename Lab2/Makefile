build: main.o libtable.a
	g++ -o lw2 main.o -L. -ltable

libtable.a: table.o
	ar cr libtable.a table.o

main.o table.o:
	g++ -c *.cpp

clean:
	rm -f *.o *.a lw2
