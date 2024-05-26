#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int op;
	int n1, n2, res;
	int cont;
	do{
	printf("escolha uma operação:\n");
	scanf("%c", &op);
	printf("escolha um numero:\n");
	scanf("%d", &n1);
	printf("escolha outro numero:\n");
	scanf("%d", &n2);
	switch(op){
		case '+':
			res = n1 + n2;
				printf("o resultado:%d", res);
		break;
		
		case '-':
			res = n1 - n2;
				printf("o resultado:%d", res);
		break;
		
		case '*':
			res = n1 * n2;
				printf("o resultado:%d", res);
		break;
		
		case '/':
			if(n2 == 0){
					printf("Erro divisão por 0:\n");
			}
			else{
			
				res = n1 / n2;
					printf("o resultado:%d", res);
			}
		break;
		
		default: printf("sem operação:\n");
	}
	printf("Utilizar novamente a calculadora s:\n", cont);
scanf("%c", &cont);
system ("pause");
}
while(cont == 'S');

//	return 0;
}

