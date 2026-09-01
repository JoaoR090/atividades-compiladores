#include <regex>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char** argv){
    // Verificamos se tem mais de um argumento na inicialização desse programa
    if(argc < 2){
        // Se tem menos de dois não foi passado o caminho do arquivo
        std::cout << "Coloque o caminho para o arquivo a analisar, logo após o nome do programa.\n";
        return 1;
    } else if(argc < 3){
        // Se tem menos de três não foi passada a tag a ser procurada
        std::cout << "Coloque a tag a ser procurada, logo após o caminho do arquivo.\n";
        return 1;
    }
    
    // Abrimos o arquivo, no modo leitura. alternativa igual: std::fstream arquivo_html(argv[1], std::ios::in);
    std::ifstream arquivo_html(argv[1]);

    // Verificamos se o arquivo foi aberto
    if(!arquivo_html.is_open()){
        // Informamos que deu errado e encerramos o programa
        std::cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    // Variavel para guardar a tag selecionada
    std::string tag = argv[2];
    
    // Variavel para guardar a regex
    std::regex regex_string("<" + tag + "\\b[^>]*>([\\s\\S]*?)</" + tag + ">");
    
    // Variável para pegar o conteúdo do arquivo
    std::string conteudo_arquivo;

    // Criamos um arquivo chamado 'conteudo_tag.txt', se ja existe excluimos tudo que ja tem. Esta aberto no modo de escrita.
    // Alternativa igual: std::fstream arquivo_conteudo_tag("conteudo_tag.txt", std::ios::trunc | std::ios::out);
    std::ofstream arquivo_conteudo_tag("conteudo_tag.txt");

    // Verificamos se o arquivo foi aberto
    if(!arquivo_conteudo_tag.is_open()){
        // Informamos que deu errado e encerramos o programa
        std::cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    // Pegamos o arquivo até o final
    std::getline(arquivo_html, conteudo_arquivo, '\0');

    // Procuramos todas as ocorrências da regex.
    auto inicio = std::sregex_iterator(conteudo_arquivo.begin(), conteudo_arquivo.end(), regex_string);
    auto fim = std::sregex_iterator();

    // Percorremos todas as ocorrências encontradas.
    for (auto it = inicio; it != fim; ++it) {
        const std::smatch& resultado = *it;

        // [0] = tag completa
        // [1] = conteúdo dentro da tag
        arquivo_conteudo_tag << "\"\"" << resultado[1] << "\"\"\n\n";
    }

    // Fechamos os arquivos
    arquivo_html.close();
    arquivo_conteudo_tag.close();

    return 0;
}