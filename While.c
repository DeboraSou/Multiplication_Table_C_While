#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "Portuguese");
	
	int x, n; /*n= número fixo; x= número escolhido.*/
	
	system ("color 8A");
	printf ("\n\t\t\t\tInsira o número que deseja saber a tabuada: \n");
	scanf ("%d", &x);
	system ("cls");
	
	system ("color 8E");
	printf ("\nTabuada do %d\n", x);
	
	while (n<=10){
		printf ("\n%d x %d = %d", x, n, x*n);
		n++;
	}
	getch ();
	
	system ("cls");
	system ("color 8D");
    
	getch ();	
	return 0;
}