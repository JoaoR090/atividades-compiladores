# Atividades de Compiladores

Repositório destinado às atividades desenvolvidas na disciplina de **Compiladores**.

O projeto reúne atividades envolvendo a linguagem **TPP**, **Expressões Regulares (Regex)**, processamento de arquivos, análise de conteúdo HTML, **análise léxica** e desenvolvimento de uma extensão para **Visual Studio Code**.

---

# Repositório

Para obter o projeto, clone o repositório:

```bash
git clone https://github.com/JoaoR090/atividades-compiladores.git
```

Depois, entre no diretório:

```bash
cd atividades-compiladores
```

---

# Atividades

## Atividade 1 — Linguagem TPP

**Localização:**

```text
1-Algoritmo_tpp/
```

**Arquivo principal:**

```text
codigo_para_teste.tpp
```

### Descrição

Esta atividade contém um algoritmo escrito na linguagem **TPP**, utilizado como arquivo de teste para os exercícios relacionados à linguagem.

O arquivo:

```text
codigo_para_teste.tpp
```

contém um exemplo de código escrito em TPP que pode ser utilizado como entrada nos testes da atividade.

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

O arquivo:

```text
emails.txt
```

é utilizado como exemplo de entrada.

Também é possível utilizar qualquer outro arquivo de texto contendo os dados que deverão ser pesquisados.

As duas implementações são compiladas automaticamente pelo **Makefile**.

---

## Execução da implementação em C

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

O formato geral é:

```bash
./2-Extracao_de_emails/pegue_email_c arquivo
```

Por exemplo:

```bash
./2-Extracao_de_emails/pegue_email_c 2-Extracao_de_emails/dados.txt
```

---

## Execução da implementação em C++

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

O formato geral é:

```bash
./2-Extracao_de_emails/pegue_email_cpp arquivo
```

Por exemplo:

```bash
./2-Extracao_de_emails/pegue_email_cpp 2-Extracao_de_emails/dados.txt
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

1. O arquivo HTML que será analisado;
2. A tag HTML que deseja procurar.

A compilação do programa é realizada automaticamente através do **Makefile**.

---

## Compilação

A partir da raiz do projeto, execute:

```bash
make
```

---

## Execução

Após a compilação, o executável estará disponível em:

```text
3-Extracao_tag_html/pegue_tag_cpp
```

O formato de execução é:

```bash
./3-Extracao_tag_html/pegue_tag_cpp arquivo tag
```

---

## Exemplo

Para procurar o conteúdo das tags `<p>` no arquivo `teste_html.html`:

```bash
./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html p
```

Nesse exemplo, o programa irá procurar estruturas como:

```html
<p>Conteúdo da tag</p>
```

e recuperar o conteúdo correspondente.

---

### Outro exemplo

Para procurar tags `<h1>`:

```bash
./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html h1
```

---

## Importante

A tag deve ser informada **sem os caracteres `<` e `>`**.

### Exemplos corretos

```text
p
h1
div
title
```

### Exemplos incorretos

```text
<p>
<h1>
<div>
```

---

## Utilizando outro arquivo HTML

Também é possível analisar outro arquivo:

```bash
./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/meu_arquivo.html p
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

A extensão foi desenvolvida utilizando a estrutura de extensões do Visual Studio Code e posteriormente compilada e empacotada utilizando o **VSCE (Visual Studio Code Extension Manager)**.

O arquivo já compilado está disponível no formato:

```text
tpp-language-0.0.1.vsix
```

---

## Instalação da extensão

Não é necessário recompilar a extensão para utilizá-la.

### 1. Abra o Visual Studio Code

Abra o **Visual Studio Code** normalmente.

### 2. Abra a aba de extensões

Acesse a seção de extensões do Visual Studio Code.

### 3. Abra o menu de opções

Clique no menu representado pelos **três pontos (`...`)** na área de extensões.

### 4. Selecione a opção

```text
Install from VSIX...
```

### 5. Selecione o arquivo

Escolha:

```text
tpp-language-0.0.1.vsix
```

### 6. Abra um arquivo TPP

Depois da instalação, abra um arquivo com a extensão:

```text
.tpp
```

A extensão deverá reconhecer a linguagem TPP e aplicar o **syntax highlighting**.

---

## Estrutura da extensão

A pasta da atividade contém os arquivos utilizados no desenvolvimento da extensão:

```text
tpp-language/

├── syntaxes/
│   └── tpp.tmGrammar.json
│
├── language-configuration.json
└── package.json
```

Também está disponível o pacote já compilado:

```text
tpp-language-0.0.1.vsix
```

Portanto, para utilizar a extensão, basta instalar o arquivo `.vsix` no Visual Studio Code.

---

# Atividade 5 — Análise Léxica

**Localização:**

```text
5-Análise_Léxica/
```

**Arquivos:**

```text
Analisador_Léxico.cpp
Automoto_Análise_Léxica.jff
```

### Descrição

Esta atividade consiste no desenvolvimento de um **analisador léxico** para a linguagem TPP.

O analisador léxico é responsável por realizar a leitura do código-fonte e identificar os diferentes elementos léxicos presentes na entrada.

A atividade também possui o arquivo:

```text
Automoto_Análise_Léxica.jff
```

que corresponde ao autômato utilizado como parte do desenvolvimento da análise léxica.

O programa principal está implementado em:

```text
Analisador_Léxico.cpp
```

A compilação é realizada automaticamente através do **Makefile**.

---

## Execução

A partir da raiz do projeto, primeiro execute:

```bash
make
```

Depois, o programa poderá ser executado através de:

```bash
./5-Análise_Léxica/Analisador_Léxico_cpp
```

Os argumentos adicionais dependem da implementação do analisador léxico.

---

# Makefile

O projeto possui um **Makefile** na raiz do repositório para automatizar a compilação dos programas desenvolvidos em **C e C++**.

O arquivo está localizado em:

```text
Makefile
```

Com ele, não é necessário realizar a compilação manual de cada atividade.

---

## Compilando o projeto

A partir da raiz do projeto, basta executar:

```bash
make
```

O Makefile irá automaticamente compilar os programas das Atividades 2, 3 e 5.

São compiladas:

```text
2-Extracao_de_emails/pegue_email.c
2-Extracao_de_emails/pegue_email.cpp
3-Extracao_tag_html/pegue_tag.cpp
5-Análise_Léxica/Analisador_Léxico.cpp
```

---

## Programas gerados

Após executar:

```bash
make
```

serão gerados os seguintes executáveis:

```text
2-Extracao_de_emails/pegue_email_c
2-Extracao_de_emails/pegue_email_cpp
3-Extracao_tag_html/pegue_tag_cpp
5-Análise_Léxica/Analisador_Léxico_cpp
```

---

## Compilação incremental

O Makefile permite realizar **compilação incremental**.

Ao executar:

```bash
make
```

novamente, o `make` verifica quais arquivos foram modificados e recompila somente os arquivos necessários.

Isso evita a necessidade de recompilar manualmente todo o projeto após cada alteração.

---

## Limpando os arquivos gerados

Para remover os arquivos objeto e os executáveis gerados pelo Makefile:

```bash
make clean
```

Esse comando remove os arquivos gerados durante a compilação.

Depois disso, o projeto pode ser compilado novamente utilizando:

```bash
make
```

---

# Tecnologias utilizadas

- **C**
- **C++**
- **C++17**
- **Make / Makefile**
- **GCC**
- **Expressões Regulares (Regex)**
- **HTML**
- **TPP**
- **Análise Léxica**
- **Autômatos Finitos**
- **Visual Studio Code**
- **VSCE (Visual Studio Code Extension Manager)**

---

# Estrutura do projeto

De forma geral, o repositório está organizado da seguinte maneira:

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
│   │   │
│   │   ├── language-configuration.json
│   │   ├── package.json
│   │   └── tpp-language-0.0.1.vsix
│   │
│   └── codigo_para_teste.tpp
│
├── 5-Análise_Léxica/
│   ├── Analisador_Léxico.cpp
│   └── Automoto_Análise_Léxica.jff
│
├── Makefile
│
└── README.md
```

---

# Resumo dos comandos

## Obter o projeto

```bash
git clone https://github.com/JoaoR090/atividades-compiladores.git

cd atividades-compiladores
```

---

## Compilar o projeto

Para compilar automaticamente as implementações em C e C++:

```bash
make
```

---

## Atividade 2 — Extração de E-mails em C

Após executar `make`:

```bash
./2-Extracao_de_emails/pegue_email_c 2-Extracao_de_emails/emails.txt
```

Formato:

```bash
./2-Extracao_de_emails/pegue_email_c arquivo
```

---

## Atividade 2 — Extração de E-mails em C++

Após executar `make`:

```bash
./2-Extracao_de_emails/pegue_email_cpp 2-Extracao_de_emails/emails.txt
```

Formato:

```bash
./2-Extracao_de_emails/pegue_email_cpp arquivo
```

---

## Atividade 3 — Extração de Tags HTML

Após executar `make`:

```bash
./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html p
```

Formato:

```bash
./3-Extracao_tag_html/pegue_tag_cpp arquivo tag
```

A tag deve ser informada sem `<` e `>`.

---

## Atividade 4 — VS Code

Instalar o arquivo:

```text
4-Highlight_Syntax/tpp-language/tpp-language-0.0.1.vsix
```

através da opção:

```text
Extensions → ... → Install from VSIX...
```

---

## Atividade 5 — Análise Léxica

Após executar `make`:

```bash
./5-Análise_Léxica/Analisador_Léxico_cpp
```

Os argumentos adicionais dependem da implementação do analisador.

---

## Limpar a compilação

Para remover os arquivos gerados:

```bash
make clean
```

---

# Fluxo recomendado

Depois de clonar o repositório, basta executar:

```bash
cd atividades-compiladores

make
```

Com isso, todas as implementações compiláveis das atividades serão construídas automaticamente.

Depois da compilação, os programas podem ser executados individualmente.

### Extração de e-mails — C

```bash
./2-Extracao_de_emails/pegue_email_c 2-Extracao_de_emails/emails.txt
```

### Extração de e-mails — C++

```bash
./2-Extracao_de_emails/pegue_email_cpp 2-Extracao_de_emails/emails.txt
```

### Extração de tags HTML

```bash
./3-Extracao_tag_html/pegue_tag_cpp 3-Extracao_tag_html/teste_html.html p
```

### Análise Léxica

```bash
./5-Análise_Léxica/Analisador_Léxico_cpp
```

Para remover os arquivos gerados:

```bash
make clean
```

---

# Observações

- O **Makefile** automatiza a compilação das implementações em C e C++ das atividades 2, 3 e 5.
- Para compilar o projeto, basta executar `make` na raiz do repositório.
- Não é necessário realizar a compilação manual dos arquivos C ou C++.
- A **Atividade 1** consiste em um arquivo de teste escrito na linguagem TPP e não possui etapa de compilação pelo Makefile.
- A **Atividade 4** possui uma versão compilada da extensão no formato `.vsix`, portanto não é necessário recompilá-la para utilizá-la.
- Na **Atividade 2**, o arquivo informado como argumento será utilizado para procurar endereços de e-mail.
- Na **Atividade 3**, a tag deve ser informada sem os caracteres `<` e `>`.
- A **Atividade 5** contém a implementação de um analisador léxico em C++ e um arquivo de autômato utilizado no desenvolvimento da atividade.
- Os arquivos C++ são compilados utilizando o padrão **C++17**.
- O Makefile utiliza as opções `-Wall -Wextra` para habilitar avisos durante a compilação.
- É necessário possuir `make`, `gcc` e `g++` instalados no sistema.
- Os arquivos de entrada devem ser informados corretamente durante a execução dos programas.
