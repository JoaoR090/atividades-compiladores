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

Na raiz do repositório, compile a atividade com:

```bash
make -C 2-Extracao_de_emails
```

Os executáveis são criados dentro da pasta da atividade:

```text
2-Extracao_de_emails/pegue_email_c
2-Extracao_de_emails/pegue_email_cpp
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

A partir da raiz do projeto, compile com:

```bash
make -C 3-Extracao_tag_html
```

O executável é criado na pasta da atividade. Execute informando o arquivo HTML e o nome da tag:

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

### Importante

A tag deve ser informada sem os caracteres `<` e `>`, por exemplo `p`, `h1` ou `div`.

---

# Atividade 4 — Syntax Highlight

**Localização:**

```text

4-Highlight_Syntax/

```

### Descrição

Esta atividade consiste no desenvolvimento de uma extensão para o **Visual Studio Code** responsável por adicionar **syntax highlighting** para a linguagem TPP.

A extensão foi desenvolvida utilizando a estrutura de extensões do Visual Studio Code e possui uma versão empacotada no formato `.vsix`.

### Instalação da extensão

No VS Code, abra **Extensions → ... → Install from VSIX...** e selecione `4-Highlight_Syntax/tpp-language/tpp-language-0.0.1.vsix`. Depois, abra um arquivo `.tpp`; não é necessário recompilar a extensão.

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

A pasta contém um Makefile próprio para compilar o analisador.

### Execução

A partir da raiz do projeto, compile com:

```bash
make -C 5-Análise_Léxica_Automoto
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

### Operações suportadas

Além das operações aritméticas originais do exemplo, são reconhecidos `&&` (AND), `||` (OR), `!` (NOT) e identificadores. Exemplos: `a + b`, `a && b`, `a || b` e `!a`.

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

# Makefiles

As atividades 2, 3 e 5 têm Makefiles próprios. Execute os comandos abaixo a partir da raiz para compilar cada atividade:

```bash
make -C 2-Extracao_de_emails
make -C 3-Extracao_tag_html
make -C 5-Análise_Léxica_Automoto
```

Para limpar os executáveis, use `make -C <pasta-da-atividade> clean`.

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
│   ├── Makefile
│   ├── pegue_email.c
│   └── pegue_email.cpp
│
├── 3-Extracao_tag_html/
│   ├── Makefile
│   ├── pegue_tag.cpp
│   └── teste_html.html
│
├── 4-Highlight_Syntax/
│   ├── tpp-language/
│   │   ├── syntaxes/
│   │   │   └── tpp.tmGrammar.json
│   │   ├── language-configuration.json
│   │   ├── package.json
│   │   └── tpp-language-0.0.1.vsix
│   └── codigo_para_teste.tpp
│
├── 5-Análise_Léxica_Automoto/
│   ├── Analisador_Léxico.cpp
│   ├── Automoto_Análise_Léxica.jff
│   ├── JFLAP7.1.jar
│   └── Makefile
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
└── README.md
```

---

---

# Observações

Instale `make`, `gcc` e `g++` para compilar as atividades 2, 3 e 5. Execute o Makefile correspondente dentro de cada pasta ou use `make -C <pasta>` a partir da raiz. Os Makefiles usam C++17 e habilitam avisos com `-Wall -Wextra`. As atividades 6 e 8 requerem Python 3 e PLY.
