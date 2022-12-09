default: groesste_zahl

groesste_zahl.o: groesste_zahl.c
	gcc -c groesste_zahl.c -o groesste_zahl.o

groesste_zahl: groesste_zahl.o
	gcc groesste_zahl.o -o groesste_zahl

clean:
	-rm -f groesste_zahl.o
	-rm -f groesste_zahl
