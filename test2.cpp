#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x[30];
    int i;

    scanf("%s", x);//%c-->character/%s-->string/your input is a string not a single character

    for(i = 0;x[i] != '\0';i++){
        printf("%c",x[i]);
        if(i%3==2){
            printf(" ");
        }
    }
    return 0;
}
