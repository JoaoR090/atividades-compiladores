#include <regex>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv){
    // Verificamos se tem mais de um argumento na inicialização desse programa
    if(argc < 2){
        // Se tem menos de dois não foi passado o caminho do arquivo
        std::cout << "Coloque o caminho para o arquivo a analisar.\n";
        return 1;
    }
    
    // Abrimos o arquivo, no modo leitura
    std::fstream arquivo_nome_email(argv[1], std::ios::in);

    // Verificamos se o arquivo foi aberto
    if(!arquivo_nome_email.is_open()){
        // Informamos que deu errado e encerramos o programa
        std::cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }
    
    // Variavel para guardar a regex
    std::regex regex_string("[a-z0-9_\\.]*@([a-z]*\\.?)*");
    
    // Variável para pegar a linha do arquivo
    std::string linha;

    // Variável para pegar o email resultante da linha
    std::smatch email;

    // Criamos um arquivo chamado 'emails.txt', se ja existe excluimos tudo que ja tem. Esta aberto no modo de escrita.
    std::fstream arquivo_emails("emails.txt", std::ios::trunc | std::ios::out);

    // Verificamos se o arquivo foi aberto
    if(!arquivo_emails.is_open()){
        // Informamos que deu errado e encerramos o programa
        std::cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }
    
    // Enquanto não acabou o arquivo ou deu erro ao pegar a linha do arquivo
    while(std::getline(arquivo_nome_email, linha)){
        // Executamos a regex na linha e verificamos se tem algum elemento.
        if(std::regex_search(linha, email, regex_string)){
            // Colocamos o email no arquivo_emails
            arquivo_emails << email[0] << '\n';
        }
    };

    // Fechamos os arquivos
    arquivo_nome_email.close();
    arquivo_emails.close();

    return 0;
}