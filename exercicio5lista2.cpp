#include <stdio.h>
#include <stdlib.h>

// Main
int main(void)
{
	// Criando arranjo -> Como possivelmente vamos inserir no arranjo
						// vamos utilizar uma variável tamanho
	int arranjo[100] = {10,20,30,40,50,70,80,90,100};
	int tamanho = 9;

	// Y
	int y = -20;
	// Boolean para y_existe no arranjo
	int y_existe = 0;

	// Verificar se y pertence ao arranjo
	for (int i = 0; i < tamanho; i++)
	{
		if (arranjo[i]==y)
		{
			y_existe = 1;
			break;
		}
	}

	// Se y não exister insere no arranjo
	if (!y_existe)
	{
		// Encontrar a posição para y ser inserido
		int i = 0; // Variável para posição
		while(arranjo[i] < y && i < tamanho)
			i++; // Obs.: i++ está dentro do while
		// Inserir y
		int aux_1 = arranjo[i]; // Guardar valor da posição que será alterada
		arranjo[i] = y; // Alterando o valor da posição para y
		tamanho++; // Inseriu um novo valor, logo o tamnho aumenta
		i++; // Próxima posição
		// Loop para trocar as posições das casas restantes -> Para manter ordem
		while(i < tamanho)
		{
			// Trocando posições
			int aux_2; // Guarda valor da posição
			aux_2 = arranjo[i];// Note que o valor de aux_2 é perdido a cada etapa do loop
			arranjo[i] = aux_1; // Alterando o valor da posição
			aux_1 = aux_2; // Guardando valor da posição para o próximo loop
			i++; // Próxima posição -> Continuando o loop
		}
	}
	else
	{
		printf("Erro: Valor já existe no arranjo.\n");
	}

	// Imprime o arranjo
	printf("Arranjo: ");
	for (int i = 0; i < tamanho; i++)
		printf("%i ", arranjo[i]);
	printf("\n");

}
