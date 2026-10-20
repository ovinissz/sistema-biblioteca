
    #include <stdio.h>
    #include <string.h>
    typedef struct {
        int codigo;
        char nome[100];
        char convenio[100];
        char telefone[15];
        char celular[16];
    } paciente;

    // Prototipos das funcoes
    void cadastro(paciente pacientes[], int tamanho);
    void lista(paciente pacientes[], int tamanho);
    void buscar(paciente pacientes[], int tamanho);

    int main(){ 
        paciente pacientes[10]; 
        pacientes[0].codigo = 101;
        pacientes[1].codigo = 102;
        pacientes[2].codigo = 103;
        pacientes[3].codigo = 104;
        pacientes[4].codigo = 105;

    strcpy(pacientes[0].nome, "Maria");
        strcpy(pacientes[1].nome,"Joao pedro");
        strcpy(pacientes[2].nome,"vinicius");
        strcpy(pacientes[3].nome,"andressa");
        strcpy(pacientes[4].nome,"gabriela");

        strcpy(pacientes[0].convenio,"Unimed");
        strcpy(pacientes[1].convenio,"Bradesco"); 
        strcpy(pacientes[2].convenio,"hapvida");
        strcpy(pacientes[3].convenio,"promedica");
        strcpy(pacientes[4].convenio,"notredame");

        strcpy(pacientes[0].telefone,"71983201092");
        strcpy(pacientes[1].telefone,"71761235601");
            strcpy(pacientes[2].telefone,"71988857006");
                strcpy(pacientes[3].telefone,"7187238123");
                    strcpy(pacientes[4].telefone,"71829392102");

                    strcpy(pacientes[0].celular,"71900001001");
                    strcpy(pacientes[1].celular, "71900001002");
                    strcpy(pacientes[2].celular, "71900001003");
                    strcpy(pacientes[3].celular, "71900001004");
                    strcpy(pacientes[4].celular, "71900001005");
            int opcao;
        int cadastrado = 1;
        int quantidade = 5;

        do {
            printf("\n+-----------------------------+\n");
            printf("|     MENU DE PACIENTES       |\n");
            printf("+-----------------------------+\n");
            printf("| 1 - Cadastrar pacientes     |\n");
            printf("| 2 - Listar pacientes        |\n");
            printf("| 3 - Buscar paciente         |\n");
            printf("| 4 - Sair                    |\n");
            printf("+-----------------------------+\n");
            printf("Digite sua opcao: ");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    cadastro(pacientes, 10);
                    quantidade = 10;
                    cadastrado = 1;
                    break;

                case 2:
                    if (cadastrado == 1) {
                        lista(pacientes, quantidade);
                    } 
                    break;
                    case 3:
                   
                    buscar(pacientes, quantidade);
                    break;
                case 4:
                    printf("Saindo do programa...\n");
                    break;

                default:
                    printf("Opcao invalida! Tente novamente.\n");
                    break;
            }

        } while (opcao != 4);

        return 0;
    }

    // Funcao para cadastrar pacientes
    void cadastro(paciente pacientes[], int tamanho) {
        for (int i = 5; i < tamanho; i++) {
            printf("\n--- Paciente %d ---\n", i + 1);

            printf("Insira o codigo do paciente: ");
            scanf("%d", &pacientes[i].codigo);

            printf("Insira o nome do paciente: ");
            scanf(" %99[^\n]", pacientes[i].nome);

            printf("Insira o convenio do paciente: ");
            scanf(" %99[^\n]", pacientes[i].convenio);

            printf("Insira o telefone fixo do paciente: ");
            scanf(" %14[^\n]", pacientes[i].telefone);

            printf("Insira o celular do paciente: ");
            scanf(" %15[^\n]", pacientes[i].celular);
        }
    }

    // Funcao para listar pacientes
    void lista(paciente pacientes[], int tamanho) {
        for (int i = 0; i < tamanho; i++) {
            printf("\n--- Paciente %d ---\n", i + 1);
            printf("Codigo: %d\n", pacientes[i].codigo);
            printf("Nome: %s\n", pacientes[i].nome);
            printf("Convenio: %s\n", pacientes[i].convenio);
            printf("Telefone fixo: %s\n", pacientes[i].telefone);
            printf("Celular: %s\n", pacientes[i].celular);
        }
    }
    // Funcao para buscar paciente por codigo
    void buscar(paciente pacientes[], int tamanho) {    
        int codigo;
        int encontrado = 0;
        printf("Digite o codigo do paciente que deseja buscar: ");
        scanf("%d",&codigo);
        for(int i=0;i<tamanho;i++){
            if(pacientes[i].codigo == codigo){
                encontrado = 1; 
            printf("\n--- Paciente encontrado ---\n");
            printf("Codigo: %d\n", pacientes[i].codigo);
            printf("Nome: %s\n", pacientes[i].nome);
            printf("Convenio: %s\n", pacientes[i].convenio);
            printf("Telefone fixo: %s\n", pacientes[i].telefone);
            printf("Celular: %s\n", pacientes[i].celular);
            }   
            }
            if (encontrado == 0) {
                printf("Paciente nao encontrado!\n");
            }
        }

     
