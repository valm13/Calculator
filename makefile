calculette: calculette.o gerepave.o gereaffichage.o libisentlib.a
	gcc -Wall calculette.o gerepave.o gereaffichage.o -o calculette libisentlib.a -lm -lglut -lGL -lX11
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall exemple.o -o exemple libisentlib.a -lm -framework OpenGL -framework GLUT

calculette.o: calculette.c ESLib.h GfxLib.h
	gcc -Wall -c calculette.c
	
gerepave.o: gerepave.c gerepave.h arit.h GfxLib.h
	gcc -Wall -c gerepave.c
	
gereaffichage.o: gereaffichage.c gereaffichage.h GfxLib.h
	gcc -Wall -c gereaffichage.c
	
arit.o: arit.c arit.h
	gcc -Wall -c arit.c

ESLib.o: ESLib.c ESLib.h ErreurLib.h
	gcc -Wall -O2 -c ESLib.c

ErreurLib.o: ErreurLib.c ErreurLib.h
	gcc -Wall -O2 -c ErreurLib.c

GfxLib.o: GfxLib.c GfxLib.h ESLib.h
	gcc -Wall -O2 -c GfxLib.c -I/usr/include/GL
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c GfxLib.c -Wno-deprecated-declarations

libisentlib.a: ErreurLib.o ESLib.o GfxLib.o calculette.o arit.o
	ar r libisentlib.a ErreurLib.o ESLib.o GfxLib.o calculette.o arit.o
	ranlib libisentlib.a

zip:
	tar -cvzf libisentlib.tgz *.[ch] *.pdf makefile

clean:
	rm -f *~ *.o

deepclean: clean
	rm -f calculette libisentlib.a
