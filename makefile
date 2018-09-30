all: mystr.o strdriver.o
	gcc -o strdriver mystr.o strdriver.o

mystr.o: mystr.c mystr.h
	gcc -c mystr.c

strdriver.o: strdriver.c mystr.h
	gcc -c strdriver.c

run:
	./strdriver

clean:
	rm *.o
