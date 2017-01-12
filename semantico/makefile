.SUFFIXES:

semantico: main.o y.tab.o tablaSimbolos.o
	gcc -o semantico main.o y.tab.o

tablaSimbolos.o: tablaSimbolos.c
	gcc -c -o tablaSimbolos.o tablaSimbolos.c

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c
	
y.tab.c: sintactico.y lex.yy.c
	bison -Wconflicts-sr -Wconflicts-rr -o y.tab.c sintactico.y

lex.yy.c: lexico.l
	lex lexico.l

limpia: 
	rm -f semantico main.o y.tab.o y.tab.c lex.yy.c tablaSimbolos.o

todo: 
	make limpia
	make sintactico
