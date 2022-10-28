#include <stdio.h>
#include <unistd.h>
#include <ctype.h>



int main(){
    char c;
    char may;
    int n = 0, count = 0;
    do{
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if (may == 'A' || may == 'E' || may == 'I' || may == 'O' || may == 'U'){
            count = count + 1;
        }
        write(STDOUT_FILENO,&may,1);
    }while(n != 0);
    printf("\n");
    printf("conte un total de %d",count);
    printf("\n");
    return 0;
}