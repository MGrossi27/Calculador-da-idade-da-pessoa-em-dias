#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int ano_nascimento, mes_nascimento, dia_nascimento, ano_atual, mes_atual, dia_atual, idade_dias;
	printf("Digite o seu ano de nascimento:\n");
	scanf("%d", &ano_nascimento);
	printf("Digite o número do mês do seu nascimento:\n");
	scanf("%d", &mes_nascimento);
	printf("Digite o dia do seu aniversário:\n");
	scanf("%d", &dia_nascimento);
	printf("Digite o ano atual:\n");
	scanf("%d", &ano_atual);
	printf("Digite o mês atual:\n");
	scanf("%d", &mes_atual);
	printf("Digite o dia de hoje:\n");
	scanf("%d", &dia_atual);
	idade_dias = (ano_atual * 365) + (mes_atual * 30) + dia_atual - ((ano_nascimento * 365) + (mes_nascimento * 30) + dia_nascimento);
	printf("Sua idade em dias é de %d", idade_dias);
	
	return 0;
}
