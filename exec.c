#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();
    if (pid == 0){
        printf("soy el proceso hijo y me voy a convertir en hola\n");
        execl("/workspace/TC1004B.513/mundo", "MUNDO" ,NULL);
        printf("esto no deberia de ejecutarse \n");
    }else{
        printf("soy el proceso padre\n");
    }
    return 0;
}