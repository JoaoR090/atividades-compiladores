#include <stdio.h>
#include <regex.h>

void copy_string(char* origem, char* destino, int inicio, int fim);

int main(int argc, char** argv){
    // Verificamos se tem mais de um argumento na inicialização desse programa
    if(argc < 2){
        // Se tem menos de dois não foi passado o caminho do arquivo
        printf("Coloque o caminho para o arquivo a analisar.\n");
        return 1;
    }

    // Guardamos o ponteiro para o arquivo
    FILE* arquivo_nome_email = fopen(argv[1], "r");

    // Verificamos se o arquivo foi aberto
    if(arquivo_nome_email == NULL){
        // Informamos que deu errado e encerramos o programa
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    // Variavel para gardar a regex em formato string
    const char* regex_string = "[a-z0-9_\\.]*@([a-z]*\\.?)*";

    // Variavel para guardar a regex compilada
    regex_t regex_compilada;
    
    // Compila a regex e verificamos se deu erro
    if (regcomp(&regex_compilada, regex_string, REG_EXTENDED) != 0) {
        // Informamos que deu errado e encerramos o programa
        printf("Erro ao compilar a regex.\n");
        return 1;
    }
    
    // Variável para pegar a linha do arquivo
    char linha[100];
    
    // Variável para pegar os emails achados
    char emails[50][100];

    // Variável para pegar o email resultante da linha
    regmatch_t email;

    // Variavel para loop
    int n_email = 0;
    
    // Enquanto não acabou o arquivo ou deu erro ao pegar a linha do arquivo
    while(fgets(linha, 100, arquivo_nome_email) != NULL){
        // Executamos a regex na linha e guardamos o inicio e o fim em email.
        int resultado = regexec(&regex_compilada, linha, 1, &email, 0);

        // Se tem correspondência
        if (resultado == 0) {
            // Copiamos para emails o trecho da linha que corresponde a regex
            copy_string(linha, emails[n_email], email.rm_so, email.rm_eo);
            n_email++;
        }
    };
    
    // Libera a memória alocada pela regex
    regfree(&regex_compilada);

    // Fechamos o arquivo
    fclose(arquivo_nome_email);

    // Criamos um arquivo chamado 'emails.txt' e pegamos um ponteiro para ele
    FILE* arquivo_emails = fopen("emails.txt", "w+");
    
    // Um loop para escreves os emails no arquivo
    for(int i = 0; i < n_email; i++){
        fputs(emails[i], arquivo_emails);
    }

    // Fechamos o arquivo
    fclose(arquivo_emails);

    return 0;
}

void copy_string(char* origem, char* destino, int inicio, int fim){
    // Representa o número de caracteres a serem copiados
    int tamanho_copia = fim - inicio;

    // Indice para controlar a copia da origem
    int indice;

    // Loop para realizar a copia
    for(indice = 0; indice < tamanho_copia; indice++){
        // Realizamos a copia de origem para o destino
        destino[indice] = origem[indice+inicio];
    }

    // Colocamos \n para pular uma linha quando colocarmos no arquivo
    destino[indice] = '\n';

    // Colocamos o fim do arquivo
    destino[indice + 1] = '\0';
}