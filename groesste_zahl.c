#include<stdio.h>

int main () {

	/*
	* 	Über dieses Programm sollen 3 Zahlen eingelesen werden und dann das Maximum ausgegeben werden.
	*/

	printf("\n ******************************** ");
	printf("\n *   ^,,,,^   *                 * ");
	printf("\n *  ( o x o)  * Maximum Ausgabe * ");
	printf("\n *  ( 7   7)  *                 * ");
	printf("\n *   ´´´´´´   *         ©S.Buch * ");
	printf("\n ******************************** \n\n");
	
	//Eingabe der Zahlen
	float a,b,c;
	printf("\nBitte geben Sie 3 Zahlen ein.\n1.Zahl: ");
	scanf("%f",&a);
	printf("\n2.Zahl: ");
	scanf("%f",&b);
	printf("\n3.Zahl: ");
	scanf("%f",&c);

	//Bewertung der Zahlen
	if (a>=b&&a>=c) {
		printf("\nDie größte eingegebene Zahl lautet %8.2f",a);
	} else if (b>a&&b>=c) {
		printf("\nDie größte eingegebene Zahl lautet %8.2f",b);
	} else {
		printf("\nDie größte eingegebene Zahl lautet %8.2f",c);
	}

	//Ende
	printf("\n\n");
	return 0;
}
