background: main.o fonctionb.o
	gcc main.o fonctionb.o -o background -lSDL -lSDL_image -lSDL_mixer
fonctionb.o: fonctionb.c
	gcc -c fonctionb.c 
main.o:main.c
	gcc -c main.c
