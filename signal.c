#include <stdio.h>
#include <signal.h>
#include <unistd.h>


int x;
void holaMundo(int signalNumber){
    if(signalNumber == 10){
        printf("es la señal 10 \n");
        x = 2;
    }else {
        printf("Es otra señal");
    }
}
void nomematas(int sig){
    printf("jajajaj no me matas \n");
}
int main(){
    x=1;
    signal(12,holaMundo);
    signal(10,holaMundo);
    signal(2,nomematas);
    while(x==1){
        printf("Estoy trabajando\n ");
        sleep(1);
    }
    printf("Nunca llega\n");
    return 0;
}