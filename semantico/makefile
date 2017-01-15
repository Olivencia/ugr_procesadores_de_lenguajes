.SUFFIXES:

semantico: main.o y.tab.o semantico.o
	gcc -o semantico main.o y.tab.o semantico.o

semantico.o: semantico.c
	gcc -c -o semantico.o semantico.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c
	
y.tab.c: semantico.y lex.yy.c
	bison -Wconflicts-sr -Wconflicts-rr -o y.tab.c semantico.y

lex.yy.c: lexico.l
	flex -l lexico.l

limpia: 
	rm -f semantico main.o y.tab.o y.tab.c lex.yy.c semantico.o

todo: 
	reset
	make limpia
	make semantico
