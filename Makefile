all: main

main: main.o ll.o
	gcc -o main main.o ll.o

main.o: main.c ll.h
	gcc -Wall -Werror -c main.c

ll.o: ll.c ll.h
	gcc -Wall -Werror -c ll.c

clean:
	rm *.o main

run: all
	./main
