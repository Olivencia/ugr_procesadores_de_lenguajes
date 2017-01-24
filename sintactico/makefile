.SUFFIXES:

sintactico: main.o y.tab.o
	gcc -o sintactico main.o y.tab.o

y.tab.o: y.tab.c
	gcc -c y.tab.c

main.o: main.c
	gcc -c main.c

y.tab.c: sintactico.y lex.yy.c
	bison -Wconflicts-sr -Wconflicts-rr -o y.tab.c sintactico.y

lex.yy.c: lexico.l
	lex lexico.l

limpia: 
	rm -f sintactico main.o y.tab.o y.tab.c lex.yy.c

todo: make limpia
	make sintactico
