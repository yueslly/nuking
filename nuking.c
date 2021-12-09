#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdlib.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]){
        do{
                int meusocket;
                int conecta;

                struct sockaddr_in alvo;

                meusocket = socket(AF_INET,SOCK_STREAM,0);
                alvo.sin_family = AF_INET;
                alvo.sin_port = htons(atoi(argv[2]));
                alvo.sin_addr.s_addr = inet_addr(argv[1]);

                conecta = connect(meusocket, (struct sockaddr *)&alvo, sizeof alvo);
        }while (1 == 1);

        return 0;
}