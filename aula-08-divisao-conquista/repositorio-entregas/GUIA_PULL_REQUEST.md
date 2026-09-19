# Como entregar por pull request

A partir desta aula as entregas de código são feitas no repositório
`entregas` da disciplina, por pull request.

Você não escreve direto no repositório do professor. Você cria uma cópia dele
na sua conta, trabalha nessa cópia e depois pede que as suas alterações sejam
incorporadas. Esse pedido é o pull request.

## Uma vez por semestre

### 1. Fazer o fork

No GitHub, abra o repositório `entregas` da disciplina e clique em **Fork**,
no canto superior direito. Isso cria uma cópia do repositório na sua conta.

### 2. Clonar o seu fork

Copie a URL do **seu** fork, não a do repositório do professor, e clone:

```bash
git clone https://github.com/<seu-usuario>/entregas.git
cd entregas
```

## A cada entrega

### 3. Criar a sua pasta

Dentro do repositório, crie uma pasta com o seu nome e, dentro dela, uma pasta
para a aula:

```bash
mkdir -p seu-nome/aula-07-recursao
```

Use seu nome em letras minúsculas e sem acento, separando as palavras por
hífen. Por exemplo: `maria-silva`.

Coloque os seus arquivos `.cpp` dentro dessa pasta.

### 4. Registrar as alterações

```bash
git add .
git commit -m "Aula 07: exercicios de recursao"
git push
```

### 5. Abrir o pull request

Abra o seu fork no GitHub. Vai aparecer um aviso sobre alterações recentes,
com o botão **Compare & pull request**. Clique nele.

Confira se o destino é o repositório da disciplina e a origem é o seu fork.
Escreva um título claro, como `Maria Silva - Aula 07`, e confirme em
**Create pull request**.

## Nas entregas seguintes

Antes de começar uma nova entrega, atualize o seu fork para receber os
arquivos das aulas novas:

```bash
git pull https://github.com/<usuario-do-professor>/entregas.git main
```

Depois repita os passos 3, 4 e 5.

## Pontos de atenção

Trabalhe sempre no **seu** fork. Se você clonar o repositório do professor
diretamente, o `push` vai falhar por falta de permissão.

Cada aluno mexe apenas na própria pasta. Não altere arquivos de colegas nem
arquivos que estão na raiz do repositório.

O nome da pasta precisa ser sempre o mesmo ao longo do semestre, para que as
suas entregas fiquem reunidas no mesmo lugar.

Se o pull request apontar arquivos que você não alterou, provavelmente o seu
fork está desatualizado. Faça o `git pull` do passo final e tente de novo.
