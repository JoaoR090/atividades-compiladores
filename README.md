# Atividades de Compiladores

Repositório com atividades da disciplina de **Compiladores**, incluindo TPP, expressões regulares, processamento de HTML, análise léxica e uso da biblioteca **PLY (Python Lex-Yacc)**.

---

# Repositório

Para obter o projeto, clone o repositório:

```bash

git clone https://github.com/JoaoR090/atividades-compiladores.git

cd atividades-compiladores

```

---

# Atividades

## Atividade 1 — Linguagem TPP

**Localização:**

```text

1-Algoritmo_tpp/

```

**Arquivo:**

```text

codigo_para_teste.tpp

```

### Descrição

Contém um exemplo de algoritmo em **TPP** para uso nos exercícios da disciplina.

---

# Atividade 2 — Extração de E-mails

**Localização:**

```text

2-Extracao_de_emails/

```

**Arquivos:**

```text

emails.txt

pegue_email.c

pegue_email.cpp

```

### Descrição

Nesta atividade foram desenvolvidos programas para localizar e recuperar endereços de e-mail presentes em um arquivo de texto utilizando **Expressões Regulares (Regex)**.

Existem duas implementações:

- `pegue_email.c` — implementação em C;

- `pegue_email.cpp` — implementação em C++.

O arquivo `emails.txt` é utilizado como exemplo de entrada.

Também é possível utilizar outros arquivos de texto contendo os dados que deverão ser pesquisados.

### Execução em C

Após executar:

```bash

make

```

o executável da implementação em C estará disponível em:

```text

2-Extracao_de_emails/pegue_email_c

```

Para executar utilizando o arquivo de exemplo:

```bash

./2-Extracao_de_emails/pegue_email_c 2-Extracao_de_emails/emails.txt

```

Formato geral:

```bash

./2-Extracao_de_emails/pegue_email_c arquivo

```

### Execução em C++

Após executar:

```bash

make

```

o executável da implementação em C++ estará disponível em:

```text

2-Extracao_de_emails/pegue_email_cpp

```

Para executar utilizando o arquivo de exemplo:

```bash

./2-Extracao_de_emails/pegue_email_cpp 2-Extracao_de_emails/emails.txt

```

Formato geral:

```bash

./2-Extracao_de_emails/pegue_email_cpp arquivo

```

---

# Atividade 3 — Extração de Tags HTML

**Localização:**

```text

3-Extracao_tag_html/

```

**Arquivos:**

```text

pegue_tag.cpp

teste_html.html

```

### Descrição

Nesta atividade foi desenvolvido um programa em **C++** utilizando **Expressões Regulares** para localizar e recuperar o conteúdo de uma determinada tag HTML.

O programa recebe como argumentos:

1\. O arquivo HTML que será analisado;

2\. A tag HTML que deseja procurar.

### Compilação

A partir da raiz do projeto:

```bash

make

```

### Execução

Após a compilação, o executável estará disponível em:

```text

3-Extracao_tag_html/pegue_tag_cpp

```

O formato de execução é:

```bash

./3-Extracao_tag_html/pegue_tag_cpp arquivo tag

```

### Exemplo

Para procurar o conteúdo das tags `<p>` no arquivo `teste_html.html`:

```bash

./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html p

```

Nesse exemplo, o programa irá procurar estruturas como:

```html

<p>Conteúdo da tag</p>

```

e recuperar o conteúdo correspondente.

### Outro exemplo

Para procurar tags `<h1>`:

```bash

./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html h1

```

### Importante

A tag deve ser informada **sem os caracteres `<` e `>`**.

Exemplos corretos:

```text

p

h1

div

title

```

Exemplos incorretos:

```text

<p>

<h1>

<div>

```

### Utilizando outro arquivo HTML

Também é possível analisar outro arquivo:

```bash

./3-Extracao_tag_html/pegue_tag_cpp meu_arquivo.html p

```

Nesse caso, o programa irá procurar as tags `<p>` dentro de `meu_arquivo.html`.

---

# Atividade 4 — Syntax Highlight

**Localização:**

```text

4-Highlight_Syntax/

```

### Descrição

Esta atividade consiste no desenvolvimento de uma extensão para o **Visual Studio Code** responsável por adicionar **syntax highlighting** para a linguagem TPP.

A extensão foi desenvolvida utilizando a estrutura de extensões do Visual Studio Code e possui uma versão empacotada no formato `.vsix`.

### Estrutura da extensão

```text

4-Highlight_Syntax/

├── tpp-language/

│   ├── syntaxes/

│   │   └── tpp.tmGrammar.json

│   ├── language-configuration.json

│   └── package.json

│

├── tpp-language-0.0.1.vsix

└── codigo_para_teste.tpp

```

### Instalação da extensão

Não é necessário recompilar a extensão para utilizá-la.

1\. Abra o **Visual Studio Code**.

2\. Abra a aba de extensões.

3\. Clique no menu representado pelos **três pontos (`...`)**.

4\. Selecione:

```text

Install from VSIX...

```

5\. Selecione o arquivo:

```text

4-Highlight_Syntax/tpp-language-0.0.1.vsix

```

6\. Abra um arquivo com a extensão:

```text

.tpp

```

A extensão deverá reconhecer a linguagem TPP e aplicar o **syntax highlighting**.

---

# Atividade 5 — Análise Léxica Automoto

**Localização:**

```text

5-Análise_Léxica_Automoto/

```

**Arquivo principal:**

```text

Analisador_Léxico.cpp

```

### Descrição

Esta atividade consiste no desenvolvimento de um **analisador léxico** para a linguagem TPP.

O analisador léxico é responsável por realizar a leitura do código-fonte e identificar os diferentes elementos léxicos presentes na entrada.

A atividade possui a implementação principal em:

```text

Analisador_Léxico.cpp

```

A compilação é realizada automaticamente através do **Makefile**.

### Execução

A partir da raiz do projeto, primeiro execute:

```bash

make

```

Depois, o programa poderá ser executado através de:

```bash

./5-Análise_Léxica_Automoto/Analisador_Léxico_cpp

```

Os argumentos adicionais dependem da implementação do analisador léxico.

---

# Atividade 6 — Analisador Léxico com PLY

**Localização:**

```text

6-Análise_Léxica/

```

**Arquivos:**

```text

calclex.py

expresão_regulares.txt

```

### Descrição

Esta atividade consiste na alteração do exemplo de **Analisador Léxico** de uma calculadora básica apresentado na documentação da biblioteca **PLY (Python Lex-Yacc)**.

O objetivo é modificar o arquivo `calclex.py` do exemplo **Lex Example** para permitir, além das operações aritméticas, a utilização de **operações lógicas**.

As operações lógicas adicionadas são:

- **AND:** `&&`

- **OR:** `||`

- **NOT:** `!`

Além disso, é necessário implementar o reconhecimento de **identificadores**, permitindo sua utilização tanto em expressões lógicas quanto em expressões aritméticas.

Por exemplo:

```text

a && b

```

ou:

```text

a + b

```

Os identificadores são necessários para que expressões contendo variáveis possam ser reconhecidas pelo analisador léxico.

### Operações suportadas

#### Operações aritméticas

A atividade mantém as operações aritméticas presentes no exemplo original da calculadora do PLY.

#### Operações lógicas

Foram adicionados os seguintes operadores:

| Operação | Operador |

| -------- | -------- | --- | --- |

| AND      | `&&`     |

| OR       | `        |     | `   |

| NOT      | `!`      |

### Identificadores

O analisador também deve reconhecer identificadores.

Exemplos:

```text

a

b

x

valor

resultado

```

Assim, expressões como as seguintes podem ser reconhecidas:

```text

a + b

a && b

a || b

!a

```

### Arquivo de expressões regulares

O arquivo:

```text

expresão_regulares.txt

```

contém as expressões regulares utilizadas como parte da atividade.

### Referência

A atividade é baseada na documentação do **PLY**, especificamente no exemplo de **Lex Example** e na seção referente à implementação de um analisador léxico para uma calculadora básica.

---

# Atividade 7 — Análise Léxica dos Compiladores Atuais

**Localização:**

```text
7-Analisadores_Léxicos_dos_Compiladores_Atuais/
```

**Arquivo:**

```text
Atividade7.pdf
```

### Descrição

Esta atividade consiste em navegar nos repositórios dos projetos de compiladores atuais para verificar como a análise léxica foi implementada. Os projetos investigados são:

- **GCC (GNU Compiler Collection);**
- **Clang / LLVM;**
- **Anthropic CCC (Claude’s C Compiler).**

O enunciado e as orientações da atividade estão disponíveis no arquivo `Atividade7.pdf`.

---

# Atividade 8 — Parser de Calculadora com PLY

**Localização:**

```text
8-Calculadora_em_PLY_(Parser)/
```

**Arquivos:** `calcparser.py` e `calclex.py`.

Com base no exemplo de calculadora da documentação do **PLY**, esta atividade altera o parser do Yacc para aceitar operações lógicas além das aritméticas, utilizando os tokens definidos pelo lexer.

---

# Makefile

O **Makefile** da raiz compila as atividades em C e C++ (atividades 2, 3 e 5). Use `make` para compilar e `make clean` para remover os arquivos gerados.

---

# Tecnologias utilizadas

- **C**

- **C++**

- **C++17**

- **Python**

- **PLY (Python Lex-Yacc)**

- **Make / Makefile**

- **GCC**

- **Expressões Regulares (Regex)**

- **HTML**

- **TPP**

- **Análise Léxica**

- **Visual Studio Code**

- **VSCE (Visual Studio Code Extension Manager)**
- **Git**

---

# Estrutura do projeto

De acordo com a organização atual do repositório:

```text
atividades-compiladores/
│
├── 1-Algoritmo_tpp/
│   └── codigo_para_teste.tpp
│
├── 2-Extracao_de_emails/
│   ├── emails.txt
│   ├── pegue_email.c
│   └── pegue_email.cpp
│
├── 3-Extracao_tag_html/
│   ├── pegue_tag.cpp
│   └── teste_html.html
│
├── 4-Highlight_Syntax/
│   ├── tpp-language/
│   │   ├── syntaxes/
│   │   │   └── tpp.tmGrammar.json
│   │   ├── language-configuration.json
│   │   └── package.json
│   ├── tpp-language-0.0.1.vsix
│   └── codigo_para_teste.tpp
│
├── 5-Análise_Léxica_Automoto/
│   └── Analisador_Léxico.cpp
│
├── 6-Análise_Léxica/
│   ├── calclex.py
│   └── expresão_regulares.txt
│
├── 7-Analisadores_Léxicos_dos_Compiladores_Atuais/
│   └── Atividade7.pdf
│
├── 8-Calculadora_em_PLY_(Parser)/
│   ├── calclex.py
│   └── calcparser.py
│
├── .gitignore
├── Makefile
└── README.md
```

---

# Resumo dos comandos

## Obter o projeto

```bash

git clone https://github.com/JoaoR090/atividades-compiladores.git

cd atividades-compiladores

```

## Compilar o projeto

```bash

make

```

## Atividade 2 — Extração de E-mails em C

```bash

./2-Extracao_de_emails/pegue_email_c 2-Extracao_de_emails/emails.txt

```

Formato:

```bash

./2-Extracao_de_emails/pegue_email_c arquivo

```

## Atividade 2 — Extração de E-mails em C++

```bash

./2-Extracao_de_emails/pegue_email_cpp 2-Extracao_de_emails/emails.txt

```

Formato:

```bash

./2-Extracao_de_emails/pegue_email_cpp arquivo

```

## Atividade 3 — Extração de Tags HTML

```bash

./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html p

```

Formato:

```bash

./3-Extracao_tag_html/pegue_tag_cpp arquivo tag

```

A tag deve ser informada sem `<` e `>`.

## Atividade 4 — VS Code

Instalar o arquivo:

```text

4-Highlight_Syntax/tpp-language-0.0.1.vsix

```

através da opção:

```text

Extensions → ... → Install from VSIX...

```

## Atividade 5 — Análise Léxica Automoto

```bash

./5-Análise_Léxica_Automoto/Analisador_Léxico_cpp

```

---

## Atividade 7 — Análise Léxica dos Compiladores Atuais

Consulte o enunciado em:

```text
7-Analisadores_Léxicos_dos_Compiladores_Atuais/Atividade7.pdf
```

A atividade propõe examinar os repositórios do GCC, Clang/LLVM e Anthropic CCC para entender como a análise léxica é implementada nesses projetos.

---

---

# Observações

- O **Makefile** automatiza a compilação das implementações em C e C++.

- Para compilar o projeto, basta executar `make` na raiz do repositório.

- Não é necessário realizar a compilação manual dos arquivos C ou C++.

- A **Atividade 1** consiste em um arquivo de teste escrito na linguagem TPP e não possui etapa de compilação pelo Makefile.

- A **Atividade 4** possui uma versão compilada da extensão no formato `.vsix`, portanto não é necessário recompilá-la para utilizá-la.

- Na **Atividade 2**, o arquivo informado como argumento será utilizado para procurar endereços de e-mail.

- Na **Atividade 3**, a tag deve ser informada sem os caracteres `<` e `>`.

- A **Atividade 5** contém a implementação de um analisador léxico em C++ para a linguagem TPP.

- A **Atividade 6** utiliza Python e a biblioteca **PLY** para implementar um analisador léxico baseado no exemplo de uma calculadora básica.

- A **Atividade 6** adiciona ao analisador o reconhecimento dos operadores lógicos `&&`, `||` e `!`.

- A **Atividade 8** amplia o parser de calculadora do PLY para reconhecer operações lógicas.

- Os arquivos C++ são compilados utilizando o padrão **C++17**.

- O Makefile utiliza as opções `-Wall -Wextra` para habilitar avisos durante a compilação.

- É necessário possuir `make`, `gcc` e `g++` instalados no sistema.

- Para executar a Atividade 6, é necessário possuir Python 3 e a biblioteca PLY instalada.

- Os arquivos de entrada devem ser informados corretamente durante a execução dos programas.

- O arquivo do **JFLAP (`Automoto_Análise_Léxica.jff`) foi omitido da documentação**.
