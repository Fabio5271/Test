#include <stdio.h>

// a:
unsigned int fact(int n) {
	if (n == 1) { return 1; }
	else { return n * fact(n - 1); }
}

// b:
unsigned int somaFt(int n) {
	if (n == 1) { return 1; }
	else { return n + somaFt(n - 1); }
}

// c:
unsigned int soma3(int n) {
	if (n == 1) { return 2; }
	else { return (3 + soma3(n - 1)); }
}

// d:
unsigned int dupl3(int n) {
	if (n == 1) { return 3; }
	else { return 2 * dupl3(n - 1); }
}

// e:
unsigned int antSoma3(int n) {
	if (n == 1) { return 0; }
	else { return n-1 + antSoma3(n - 1); }
}

int main() {
	int x; unsigned int run = 1;
	char c,runC;
	while (run == 1){ 
	printf("-------------------------------------------------------------------\n");
	printf("Insira uma letra ('a/b/c/d/e' ou 't' para rodar todas de uma vez): ");
	scanf("%c",&c);
	printf("Insira a posição desejada na sequência: "); // Variável usada na função selecionada
	scanf("%d", &x);
	printf("-------------------------------------------------------------------\n");

	switch (c){
	case 'a':
 	printf("%d! = %d\n", x, fact(x));
	break;
	
	case 'b':
 	printf("b(%d) = %d\n", x, somaFt(x));
	break;
	
	case 'c':
 	printf("c(%d) = %d\n", x, soma3(x));
	break;
	
	case 'd':
 	printf("d(%d) = %d\n", x, dupl3(x));
	break;
	
	case 'e':
 	printf("e(%d) = %d\n", x, antSoma3(x));
	break;
	
	case 't':
 	printf("%d! = %d\n", x, fact(x));
 	printf("b(%d) = %d\n", x, somaFt(x));
 	printf("c(%d) = %d\n", x, soma3(x));
 	printf("d(%d) = %d\n", x, dupl3(x));
 	printf("e(%d) = %d\n", x, antSoma3(x));
	break;
	}
	getchar();
	printf("\nContinuar? (s/n): ");
    scanf("%c", &runC);
    if (runC == 'n') {
      run = 0;
    }
  getchar();
}
	return 0;
}
