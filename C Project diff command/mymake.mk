diff: main.o edit.o
	gcc -o diff main.o edit.o

main.o: main.c edit.h
	gcc -c main.c edit.h

edit.o: edit.c
	gcc -c edit.c
