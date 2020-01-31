
/*

TASKS:

 1 - Criar o ambiente de desenvolvimento utilizando makefile e a lib de testes boost
 2 - Criar o componente de leitura do arquivo de configuração (Config)
 3 - Criar o componente principal responsável pela cli (Main)
 4 - Criar o componente responsavel pelo monitoramento da pasta de origem de acordo com a periodicidade informada na configuração (TimeMonitor)
 5 - Criar o componente responsável pela transferência dos arquivos entre origem e destino (FileTransfer)

FLUXO:

Quando o Main é iniciado, ele lê todas as configurações através do Config e despacha para o TimeMonitor iniciar o monitoramento do tempo
Periodicamente, o TimeMonitor aciona o FileTransfer para que ele faça a transferência dos arquivos.

make: compila o projeto
sudo make deps: instala o boost como dependência para começarmos a codificar e ir adicionando os testes

EXIGENCIAS:

- transferir arquivos entre pastas pelo filename (USAR REGEX to search)

- arquivos devem ser transferidos periodicamente (USAR LONG DE SEGUNDOS)

- transferencia unidirecional

- não podemos compilar de novo se quisermos trocar pastas (UTILIZAR CLI)

TASKS:

- Criar o ambiente de desenvolvimento utilizando makefile e a lib de testes boost. Possiveis comandos
** make install -> compila tudo e gera o arquivo executavel
** make dev -> prepara o ambiente instalando a lib de testes
** make test -> executa os testes


POSSIVEL FLUXO:

- Quando o Main é iniciado, ele lê todas as configurações através do Config e despacha para o TimeMonitor iniciar o monitoramento do tempo
- Periodicamente, o TimeMonitor aciona o FileTransfer para que ele faça a transferência dos arquivos

STRUCTURE :

- Read config.cfg (Capturar todas infos de conf)

-Parametros usados :

    1 - ORIGINAL FOLDER 
    2 - DESTINATION FOLDER
    3 - NAME OF THE FILE TO TRANSFER
    4 - PERIODICITY OF EACH TRANSFER


- Process configuration

    A - Found the file : Transfer to destination
    B - File not found : do nothing

- Libraries

    Boost : Test
    Time.h : Contagem Tempo

*/



