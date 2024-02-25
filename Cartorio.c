		#include <stdio.h> // biblioteca de comunicação com o usuário
		#include <stdlib.h> // biblioteca de alocação de espaço em memória
		#include <locale.h> // biblioteca de alocações de texto por região
		#include <string.h> // biblioteca responsável por cuidar das Strings
		
		
		int registro() // Função responsável por cadastrar os usuários no sistema
		{
		char arquivo[40]; // Inicio da criação de variáveis (strings)
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40]; // Final da criação das variáveis
		
		printf("Digite o CPF a ser cadastrado:\n"); //Coletando informações do usuário
		scanf("%s", cpf); // Refere-se ao armazenamento de strings
		
		strcpy(arquivo,cpf); // Responsavel por copiar os valores das Strings
		
		FILE *file; // Responsavel por criar o arquivo
		file = fopen(arquivo, "w"); // cria o arquivo na pasta e o "W" significa escrever
		fprintf(file,cpf); // Salva o valor da variavel
		fclose(file); // Fecha o arquivo
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o nome a ser cadastrado:\n");
		scanf("%s", nome);
		
		file = fopen(arquivo, "a");
		fprintf(file,nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o sobrenome a ser cadastrado:\n");
		scanf("%s", sobrenome);
		
		file = fopen(arquivo, "a");
		fprintf(file,sobrenome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o cargo a ser cadastrado:\n");
		scanf("%s", cargo);
		
		file = fopen(arquivo, "a");
		fprintf(file,cargo);
		fclose(file);
		
		system("pause");
		
		}
	
		int consulta()
		{
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
		
		char cpf[40];
		char conteudo[200];
		
		printf("Digite o CPF a ser consultado: ");
		scanf("%s",cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
			printf("Não foi possível abrir o arquivo, não localizado!.\n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
		printf("\nEssas são as informações do usuário");
		printf("%s", conteudo);
		printf("\n\n");
		}
	
		system("pause");
	
		}


		int deletar()
		{
			
		char cpf[40];
		
		printf("Digite o CPF do usuário a ser deletado: ");
		scanf("%s", cpf);
		
		remove(cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
		printf("O usuário não se encontra no sistema!. \n");
		system("pause");
			
		}
		
		}


		int main()
		{
  		int opcao=0; // Definindo as variávies
	  	int laco=1;
	  
	  	for(laco=1;laco=1;)
		{
	  
	    system("cls");
	  
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
		
		printf("### Cartório de alunos da EBAC ###\n\n"); // Inicio do menu
		printf("Escolha a opção desejada do menu: \n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); // Final do menu
		printf("Opções :");
		
		scanf("%d", &opcao); // Armazenado a escolha do usuário
		
	    system("cls"); // Responsável por limpar a tela
	    	
	    	
	    switch(opcao) // Inicio da seleção
	    {
	    case 1:
	    registro(); // Chamada de funções
	    system("pause");
		break;
			   
		case 2:
		consulta();
		break;
				
		case 3:
		deletar();
		break;
				
				
		default:
		printf("Essa opção não está disponivel!\n");
		system("pause");
		break;
		}
	    	
    	
	
		 }
	}
