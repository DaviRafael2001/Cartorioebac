		#include <stdio.h> // biblioteca de comunica��o com o usu�rio
		#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
		#include <locale.h> // biblioteca de aloca��es de texto por regi�o
		#include <string.h> // biblioteca respons�vel por cuidar das Strings
		
		
		int registro() // Fun��o respons�vel por cadastrar os usu�rios no sistema
		{
		char arquivo[40]; // Inicio da cria��o de vari�veis (strings)
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40]; // Final da cria��o das vari�veis
		
		printf("Digite o CPF a ser cadastrado:\n"); //Coletando informa��es do usu�rio
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
			printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n");
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
		printf("\nEssas s�o as informa��es do usu�rio");
		printf("%s", conteudo);
		printf("\n\n");
		}
	
		system("pause");
	
		}


		int deletar()
		{
			
		char cpf[40];
		
		printf("Digite o CPF do usu�rio a ser deletado: ");
		scanf("%s", cpf);
		
		remove(cpf);
		
		FILE *file;
		file = fopen(cpf,"r");
		
		if(file == NULL)
		{
		printf("O usu�rio n�o se encontra no sistema!. \n");
		system("pause");
			
		}
		
		}


		int main()
		{
  		int opcao=0; // Definindo as vari�vies
	  	int laco=1;
	  
	  	for(laco=1;laco=1;)
		{
	  
	    system("cls");
	  
		setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
		
		printf("### Cart�rio de alunos da EBAC ###\n\n"); // Inicio do menu
		printf("Escolha a op��o desejada do menu: \n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n\n"); // Final do menu
		printf("Op��es :");
		
		scanf("%d", &opcao); // Armazenado a escolha do usu�rio
		
	    system("cls"); // Respons�vel por limpar a tela
	    	
	    	
	    switch(opcao) // Inicio da sele��o
	    {
	    case 1:
	    registro(); // Chamada de fun��es
	    system("pause");
		break;
			   
		case 2:
		consulta();
		break;
				
		case 3:
		deletar();
		break;
				
				
		default:
		printf("Essa op��o n�o est� disponivel!\n");
		system("pause");
		break;
		}
	    	
    	
	
		 }
	}
