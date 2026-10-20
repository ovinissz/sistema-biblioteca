#include <stdio.h>
#include <string.h>

// Estrutura dos usuarios
typedef struct {
	int id;
	char nome[50];
	char status[15];
} usuario;

// Estrutura dos autores
typedef struct {
	int id;
	char nome[50];
	char status[15];
} autor;

// Estrutura dos livros
typedef struct {
	int id;
	char titulo[100];
	int idAutor;
	int quantidade;
	int disponiveis;
} livro;

// Estrutura dos emprestimos
typedef struct {
	int idusuario;
	int idlivro;

	int diaemprestimo;
	int mesemprestimo;
	int anoemprestimo;

	int diadevolucao;
	int mesdevolucao;
	int anodevolucao;
	char devolvido[30];
} emprestimo;
void cadastro(usuario usuarios[10],int tamanho);
void cadastroautores(autor autores[10],int tamanho);
void cadastrolivros(livro livros[10],int tamanho);
void cadastroemprestimos(emprestimo emprestimos[10],int tamanho);
void relatorios(usuario usuarios[10],autor autores[10],livro livros[10],int tamanho);
void relatorioemprestimos(emprestimo emprestimos[10],int tamanho);
void buscarusuario(usuario usuarios[10],int tamanho);
void buscarautor(autor autores[10],int tamanho);
void buscarlivro(livro livros[10],int tamanho);


int main() {
	usuario usuarios[10];
	autor autores[10];
	livro livros[10];
	emprestimo emprestimos[10];
	usuarios[0].id = 101;
	strcpy(usuarios[0].nome,"Vinicius Silva");
	strcpy(usuarios[0].status,"ativo");



	autores[0].id = 1001;
	strcpy(autores[0].nome,"Machado de assis");
	strcpy(autores[0].status,"Ativo");
	
	livros[0].id = 10001;
	strcpy(livros[0].titulo,"Dom casmurro");
	livros[0].idAutor= 1001;
	livros[0].quantidade = 25;
	livros[0].disponiveis = 10;

	emprestimos[0].idusuario = 101;
	emprestimos[0].idlivro = 10001;
	emprestimos[0].diaemprestimo = 20;
	emprestimos[0].mesemprestimo = 10;
	emprestimos[0].anoemprestimo = 2026;
	emprestimos[0].diadevolucao = 20;
	emprestimos[0].mesdevolucao = 11;
	emprestimos[0].anodevolucao = 2026;
	strcpy(emprestimos[0].devolvido,"20/11/2026");

     usuarios[1].id=102;
     strcpy(usuarios[1].nome,"João pedro");
     strcpy(usuarios[1].status,"Inativo");
     autores[1].id=1002;
     strcpy(autores[1].nome,"HP Lovecraft");
     strcpy(autores[1].status,"Ativo");
     livros[0].id = 10002;
     strcpy(livros[1].titulo,"O Chamado de Cthulhu");
     livros[1].idAutor = 10002;
     livros[1].quantidade = 20;
     livros[1].disponiveis = 3;
     emprestimos[1].idusuario = 102;
     emprestimos[1].idlivro = 10002;
     emprestimos[1].diaemprestimo = 21;
     emprestimos[1].mesemprestimo = 10;
     emprestimos[1].anoemprestimo = 2026;
     emprestimos[1].diadevolucao = 21;
     emprestimos[1].mesdevolucao =11;
     emprestimos[1].anodevolucao = 2026;
     strcpy(emprestimos[1].devolvido,"NAO devolvido");
     
     usuarios[2].id=103;
     strcpy(usuarios[2].nome,"Andressa Maria");
     strcpy(usuarios[2].status,"Ativa");
     autores[2].id = 10003;
     strcpy(autores[2].nome,"Rebecca yarros");
     strcpy(autores[2].status,"Ativo");
     livros[2].id = 10003;
     strcpy(livros[2].titulo,"A quarta Asa");
     livros[2].idAutor = 1003;
     livros[2].quantidade = 10;
     livros[2].disponiveis =2;
     


	// Aqui entra o menu do SISBIB
	int entrada;
	do {
		printf("\n+------SISBIB-SISBIB-SISBIB------+");
		printf("\n+SISTEMA DE GESTÃO DE BIBLIOTECAS+");
		printf("\n+------SISBIB-SISBIB-SISBIB------+");
		printf("\n+--------------------------------+");
		printf("\n|1- Gestão de Livros             |\n|2- Gestão de autores            |\n|3- Gestão de usuarios           |\n|4- Relatórios                   |\n|5- Gestão de Empréstimos        |\n|6- Sair                         |");
		printf("\n+--------------------------------+");
		printf("\n+------Digite a sua entrada:-----+\n");

		printf("\n\n");
		scanf("%d",&entrada);

		switch(entrada) {
		case 1:
			printf("+--------------------------------+\n");
			printf("+ ---Tela de Gestão de Livro---  +");
			cadastrolivros(livros,10);


			break;

		case 2:
			printf("+--------------------------------+\n");
			printf("+ --Tela de Gestão de autores--  +");
            cadastroautores(autores,10);
			break;

		case 3:
			printf("+--------------------------------+\n");
			printf("+ --Tela de Gestão de usuarios-- +");
			break;

		case 4:
			printf("+--------------------------------+\n");
			printf("+ -Tela de Gestão de Relatórios- +");
			int opcaoRelatorio;
			 printf("\n===== RELATORIOS =====\n");
    printf("1 - Listar usuarios\n");
    printf("2 - Listar autores\n");
    printf("3 - Listar livros\n");
    printf("4 - Voltar ao menu principal\n");
    printf("Escolha: ");
    scanf("%d", &opcaoRelatorio);
    switch (opcaoRelatorio){
    case 1:
    printf("1-Listar usuarios:");
			for(int i=0; i< 3;i++){
			    printf("Id do usuario:%d\n",usuarios[i].id);
			    printf("Nome do usuario:%s\n",usuarios[i].nome);
			    printf("status: %s\n",usuarios[i].status);
			}
			    break;
			    case 2:
			    for(int i=0; i< 3;i++){
			    printf("2-Listar autores:\n");
			    printf("Codigo do autor:%d\n",autores[i].id);
			    printf("Nome do autor:%s\n",autores[i].nome);
			    printf("Status do autor:%s\n",autores[i].status);
			    
			    }
			    break;
			    case 3:
			    for(int i=0; i< 3;i++){
			    printf("3-Listar Livros:\n");
			    printf("ID do livro:%d\n",livros[i].id);
			    printf("Titulo do livro:%s\n",livros[i].titulo);
			    printf("ID do autor:%d\n",livros[i].idAutor);
			    printf("Quantidade: %d\n",livros[i].quantidade);
			    printf("Disponiveis:%d\n",livros[i].disponiveis);
			    }
			    break;
			    case 4:
			    printf("4-voltar ao menu principal:");
			    
			
}
			break;

		case 5:
			printf("+--------------------------------+\n");
			printf("+ -Tela de Gestão de Empréstimos-+");
			for(int i=0; i<3;i++){
			    printf("ID do usuario:%d\n",emprestimos[i].idusuario);
			     printf("ID do livro:%d\n",emprestimos[i].idlivro);
			      printf("Dia do emprestimo:%d\n",emprestimos[i].diaemprestimo);
			       printf("Mes do emprestimo:%d\n",emprestimos[i].mesemprestimo);
			        printf("Ano do emprestimo:%d\n",emprestimos[i].anoemprestimo);
			         printf("dia da devolução:%d\n",emprestimos[i].diadevolucao);
			          printf("Mes da devolção: %d\n",emprestimos[i].mesdevolucao);
			           printf("ano da devolução:%d\n",emprestimos[i].anodevolucao);
			            printf("Devolvido em:%s\n",emprestimos[i].devolvido);
			}
			break;

		case 6:
			printf("Tchau Tchau\n");
			break;

		default:
			printf("Numero inválido, tente de novo");
			break;
		}
	} while(entrada != 6);;
	printf("\n\n");
	printf("\n\n");



	return 0;
} 
void cadastrolivros(livro livros[10],int tamanho) {
	for(int i=3; i<tamanho; i++) {
		printf("Insira o ID do livro:");
		scanf("%d",&livros[i].id);
		printf("Insira o Titulo do livro:");
		scanf(" %99[^\n]",livros[i].titulo);
		printf("Insira o ID do autor:");
		scanf("%d",&livros[i].idAutor);
		printf("Insira a Quantidade:");
		scanf("%d",&livros[i].quantidade);

		livros[i].disponiveis = livros[i].quantidade;
		printf("Disponiveis:%d",livros[i].disponiveis);
    }
	}
	void cadastroautores(autor autores[10],int tamanho) {
    for(int i=3; i<tamanho; i++) {
        printf("Insira o ID do autor:");
        scanf("%d",&autores[i].id);
        printf("Insira o Nome do autor:");
        scanf(" %49[^\n]",autores[i].nome);
        printf("Insira o Status do autor:");
        scanf(" %14[^\n]",autores[i].status);
    }
}
