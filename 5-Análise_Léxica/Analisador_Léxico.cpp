#include <iostream>
#include <string>
#include <cctype>

using namespace std;

enum class TokenType {
    INTEIRO,
    FLOAT,
    ID,
    INVALIDO
};

struct Token {
    TokenType tipo;
    string lexema;
};

string tipoToString(TokenType tipo) {
    switch (tipo) {
        case TokenType::INTEIRO:
            return "INTEIRO";

        case TokenType::FLOAT:
            return "FLOAT";

        case TokenType::ID:
            return "ID";

        default:
            return "INVALIDO";
    }
}


/*
    AUTÔMATO PARA INTEIROS
    \d+
*/

bool reconheceInteiro(const string& entrada, size_t inicio, size_t& fim) {

    size_t i = inicio;

    // Estado q0:
    // precisa obrigatoriamente começar com um dígito.
    if (i >= entrada.size() || !isdigit(entrada[i])) {
        return false;
    }

    // Estado q1:
    // continua consumindo dígitos.
    while (i < entrada.size() && isdigit(entrada[i])) {
        i++;
    }

    fim = i;

    return true;
}


/*
    AUTÔMATO PARA FLOAT
    \d+\.?\d*e(+|-)?\d+
*/

bool reconheceFloat(const string& entrada, size_t inicio, size_t& fim) {

    size_t i = inicio;

    if (i >= entrada.size() || !isdigit(entrada[i])) {
        return false;
    }

    while (i < entrada.size() && isdigit(entrada[i])) {
        i++;
    }

    if (i < entrada.size() && entrada[i] == '.') {

        i++;

        while (i < entrada.size() && isdigit(entrada[i])) {
            i++;
        }
    }

    if (i >= entrada.size() || entrada[i] != 'e') {
        return false;
    }

    i++;

    if (i < entrada.size() &&
        (entrada[i] == '+' || entrada[i] == '-')) {

        i++;
    }

    if (i >= entrada.size() || !isdigit(entrada[i])) {
        return false;
    }

    while (i < entrada.size() && isdigit(entrada[i])) {
        i++;
    }

    fim = i;

    return true;
}


/*
    AUTÔMATO PARA IDs
    [a-zA-Z_][a-zA-Z0-9_]*
*/

bool reconheceID(const string& entrada, size_t inicio, size_t& fim) {

    size_t i = inicio;

    if (i >= entrada.size()) {
        return false;
    }

    char c = entrada[i];

    if (!(isalpha(c) || c == '_')) {
        return false;
    }

    i++;

    while (i < entrada.size()) {

        c = entrada[i];

        if (isalnum(c) || c == '_') {
            i++;
        } else {
            break;
        }
    }

    fim = i;

    return true;
}


/*
    ANALISADOR LÉXICO
*/

Token proximoToken(const string& entrada, size_t& pos) {

    // Ignora espaços.
    while (pos < entrada.size() && isspace(entrada[pos])) {
        pos++;
    }

    // Fim da entrada.
    if (pos >= entrada.size()) {
        return {TokenType::INVALIDO, ""};
    }

    size_t fim;

    if (isalpha(entrada[pos]) || entrada[pos] == '_') {

        if (reconheceID(entrada, pos, fim)) {

            string lexema = entrada.substr(pos, fim - pos);

            pos = fim;

            return {TokenType::ID, lexema};
        }
    }

    if (isdigit(entrada[pos])) {

        if (reconheceFloat(entrada, pos, fim)) {

            string lexema = entrada.substr(pos, fim - pos);

            pos = fim;

            return {TokenType::FLOAT, lexema};
        }

        if (reconheceInteiro(entrada, pos, fim)) {

            string lexema = entrada.substr(pos, fim - pos);

            pos = fim;

            if (fim < entrada.size()) {

                char proximo = entrada[fim];

                if (isalpha(proximo) ||
                    proximo == '_' ||
                    proximo == '.') {

                    size_t erroFim = fim;

                    while (erroFim < entrada.size() &&
                           !isspace(entrada[erroFim])) {
                        erroFim++;
                    }

                    string invalido =
                        entrada.substr(pos, erroFim - pos);

                    pos = erroFim;

                    return {TokenType::INVALIDO, invalido};
                }
            }

            return {TokenType::INTEIRO, lexema};
        }
    }

    string invalido(1, entrada[pos]);

    pos++;

    return {TokenType::INVALIDO, invalido};
}

int main() {

    string entrada;

    cout << "Digite uma entrada: ";
    getline(cin, entrada);

    size_t pos = 0;

    while (pos < entrada.size()) {

        // Guarda a posição antes de analisar.
        size_t posAnterior = pos;

        Token token = proximoToken(entrada, pos);

        if (token.lexema.empty()) {
            break;
        }

        cout << "<"
             << tipoToString(token.tipo)
             << ", "
             << token.lexema
             << ">"
             << endl;

        if (pos == posAnterior) {
            pos++;
        }
    }

    return 0;
}