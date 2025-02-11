# Minitalk

Minitalk é um projeto da 42 que tem como objetivo criar um sistema simples de comunicação entre processos utilizando sinais do UNIX.

## Objetivo

O programa consiste em dois componentes:
1. **Servidor**: Recebe mensagens enviadas por um cliente e as exibe no terminal.
2. **Cliente**: Envia mensagens para o servidor utilizando sinais.

O protocolo de comunicação deve ser implementado com os sinais **SIGUSR1** e **SIGUSR2**.

## Compilação

Para compilar o projeto, utilize o seguinte comando:

```sh
make
```

Isso gerará os executáveis `server` e `client`.

## Uso

1. **Inicie o servidor**:

   ```sh
   ./server
   ```

   Ele exibirá seu PID, que será utilizado pelo cliente para enviar mensagens.

2. **Envie uma mensagem do cliente para o servidor**:

   ```sh
   ./client <PID_DO_SERVIDOR> "Mensagem a ser enviada"
   ```

   Substitua `<PID_DO_SERVIDOR>` pelo PID exibido pelo servidor.

## Regras e Restrições

- O servidor deve ser capaz de receber várias mensagens sequencialmente.
- Cada caractere da mensagem deve ser enviado bit a bit utilizando sinais.
- O cliente deve enviar a mensagem e aguardar até que toda a mensagem seja processada.
- O servidor deve confirmar a recepção de cada caractere.

## Funções Permitidas

O projeto permite o uso das seguintes funções da biblioteca padrão do C:

- `write`
- `getpid`
- `kill`
- `signal`
- `sigaction`
- `pause`
- `sleep`
- `usleep`
- `exit`

## Estrutura do Projeto

- `server.c` - Implementação do servidor.
- `client.c` - Implementação do cliente.
- `Makefile` - Compila e gera os executáveis.
- `minitalk.h` - Cabeçalho com definições e protótipos.

## Exemplo de Uso

### Iniciando o servidor:

```sh
$ ./server
Servidor iniciado. PID: 12345
```

### Enviando uma mensagem:

```sh
$ ./client 12345 "Hello, world!"
```

No terminal do servidor:

```sh
Mensagem recebida: Hello, world!
```

## Autores

Projeto realizado no contexto da 42.

- [Nuno Pereira](https://github.com/nunotapxd)

