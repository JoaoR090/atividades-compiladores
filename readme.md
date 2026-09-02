# Atividades de Compiladores

Repositório destinado às atividades desenvolvidas na disciplina de **Compiladores**.

O projeto reúne atividades envolvendo a linguagem **TPP**, **Expressões Regulares (Regex)**, processamento de arquivos, análise de conteúdo HTML e desenvolvimento de uma extensão para **Visual Studio Code**.

## Repositório

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
atividades/1-Algoritmo_tpp/
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

### Exemplo

```text
codigo_para_teste.tpp
```

---

# Atividade 2 — Extração de E-mails

**Localização:**

```text
atividades/2-Extração_de_emails/
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

É possível utilizar qualquer outro arquivo de texto contendo os dados que deverão ser pesquisados.

---

## Usando `pegue_email.c`

Primeiro, entre no diretório da atividade:

```bash
cd atividades/2-Extração_de_emails/
```

Compile o programa:

```bash
gcc pegue_email.c -o pegue_email
```

Depois execute informando o arquivo que será analisado:

```bash
./pegue_email emails.txt
```

O formato geral é:

```bash
./pegue_email arquivo
```

Por exemplo:

```bash
./pegue_email emails.txt
```

Nesse caso, o programa irá analisar o arquivo `emails.txt` e procurar os endereços de e-mail utilizando uma expressão regular.

---

## Usando `pegue_email.cpp`

Também existe uma implementação em **C++**:

```text
pegue_email.cpp
```

Para compilá-la, utilize um compilador C++, como o `g++`:

```bash
g++ pegue_email.cpp -o pegue_email_cpp
```

Depois execute:

```bash
./pegue_email_cpp emails.txt
```

O formato geral é:

```bash
./pegue_email_cpp arquivo
```

Por exemplo:

```bash
./pegue_email_cpp emails.txt
```

### Exemplo utilizando outro arquivo

Caso exista um arquivo chamado:

```text
dados.txt
```

contendo os dados que deverão ser analisados, basta executar:

```bash
./pegue_email_cpp dados.txt
```

O programa receberá o arquivo como argumento e procurará os endereços de e-mail presentes nele.

### Compilação e execução completas

```bash
cd atividades/2-Extração_de_emails/

g++ pegue_email.cpp -o pegue_email_cpp

./pegue_email_cpp emails.txt
```

---

# Atividade 3 — Extração de Tags HTML

**Localização:**

```text
atividades/3-Extracao_tag_html/
```

**Arquivos:**

```text
pegue_tag.cpp
teste_html.html
```

### Descrição

Nesta atividade foi desenvolvido um programa em **C++** utilizando **Expressões Regulares** para localizar e recuperar o conteúdo de uma determinada tag HTML.

O usuário informa:

1. O programa;
2. O arquivo HTML que será analisado;
3. A tag HTML que deseja procurar.

### Compilação

Entre no diretório da atividade:

```bash
cd atividades/3-Extracao_tag_html/
```

Compile o programa:

```bash
g++ pegue_tag.cpp -o pegue_tag
```

### Formato de execução

```bash
./pegue_tag arquivo tag
```

### Exemplo

Para procurar o conteúdo das tags `<p>` no arquivo `teste_html.html`:

```bash
./pegue_tag teste_html.html p
```

Nesse exemplo, o programa irá procurar estruturas como:

```html
<p>Conteúdo da tag</p>
```

e recuperar o conteúdo correspondente.

### Outro exemplo

Para procurar tags `<h1>`:

```bash
./pegue_tag teste_html.html h1
```

### Importante

A tag deve ser informada **sem os caracteres `<` e `>`**.

#### Exemplos corretos

```text
p
h1
div
title
```

#### Exemplos incorretos

```text
<p>
<h1>
<div>
```

### Utilizando outro arquivo HTML

Também é possível analisar outro arquivo:

```bash
./pegue_tag meu_arquivo.html p
```

Nesse caso, o programa irá procurar as tags `<p>` dentro de `meu_arquivo.html`.

---

# Atividade 4 — Syntax Highlight

**Localização:**

```text
atividades/4-Highlight_Syntax/
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
├── language-configuration.json
└── package.json
```

Também está disponível o pacote já compilado:

```text
tpp-language-0.0.1.vsix
```

Portanto, para utilizar a extensão, basta instalar o arquivo `.vsix` no Visual Studio Code.

---

# Tecnologias utilizadas

- **C**
- **C++**
- **Expressões Regulares (Regex)**
- **HTML**
- **TPP**
- **Visual Studio Code**
- **VSCE (Visual Studio Code Extension Manager)**

---

# Estrutura do projeto

De forma geral, o repositório está organizado da seguinte maneira:

```text
atividades-compiladores/
│
├── atividades/
│   │
│   ├── 1-Algoritmo_tpp/
│   │   └── codigo_para_teste.tpp
│   │
│   ├── 2-Extração_de_emails/
│   │   ├── emails.txt
│   │   ├── pegue_email.c
│   │   └── pegue_email.cpp
│   │
│   ├── 3-Extracao_tag_html/
│   │   ├── pegue_tag.cpp
│   │   └── teste_html.html
│   │
│   └── 4-Highlight_Syntax/
│       ├── tpp-language/
│       │   ├── syntaxes/
│       │   ├── language-configuration.json
│       │   └── package.json
│       │
│       └── tpp-language-0.0.1.vsix
│
└── README.md
```

---

# Resumo dos comandos

## Atividade 1

Arquivo de teste:

```text
codigo_para_teste.tpp
```

---

## Atividade 2 — C

Compilar:

```bash
gcc pegue_email.c -o pegue_email
```

Executar:

```bash
./pegue_email emails.txt
```

Formato:

```bash
./pegue_email arquivo
```

---

## Atividade 2 — C++

Compilar:

```bash
g++ pegue_email.cpp -o pegue_email_cpp
```

Executar:

```bash
./pegue_email_cpp emails.txt
```

Formato:

```bash
./pegue_email_cpp arquivo
```

---

## Atividade 3 — C++

Compilar:

```bash
g++ pegue_tag.cpp -o pegue_tag
```

Executar:

```bash
./pegue_tag teste_html.html p
```

Formato:

```bash
./pegue_tag arquivo tag
```

A tag deve ser informada sem `<` e `>`.

---

## Atividade 4 — VS Code

Instalar o arquivo:

```text
tpp-language-0.0.1.vsix
```

através da opção:

```text
Extensions → ... → Install from VSIX...
```

---

# Observações

- Os nomes dos executáveis podem variar de acordo com o nome utilizado durante a compilação.
- Os arquivos de entrada devem ser informados corretamente durante a execução dos programas.
- Na **Atividade 2**, o arquivo informado como argumento será utilizado para procurar endereços de e-mail.
- A implementação da Atividade 2 está disponível tanto em **C** quanto em **C++**.
- Na **Atividade 3**, a tag deve ser informada sem os caracteres `<` e `>`.
- A **Atividade 4** já possui uma versão compilada da extensão no formato `.vsix`, portanto não é necessário recompilá-la para utilizá-la.
- Os comandos de compilação apresentados pressupõem que `gcc` e `g++` estejam instalados no sistema.
