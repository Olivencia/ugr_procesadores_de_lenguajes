.SUFFIXES:

lexico: lex.yy.o
	gcc -o lexico lex.yy.o

lex.yy.o: lex.yy.c
	gcc -c lex.yy.c

lex.yy.c: lexico.l
	lex lexico.l

limpia: 
	rm -f lexico lex.yy.o lex.yy.c

todo: make limpia
	make lexico
