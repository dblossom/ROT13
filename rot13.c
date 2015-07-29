/*  */
#include<stdio.h>
#include <stdlib.h>

void toRot13(char *str){

    int len;
    len = strlen(str);

    for(i = 0; i < len; i++){
        char c = str[i] + 13;
        printf("%c", c);
    }
    printf("\n");
}

void fromRot13(){

}

int main(void)
{
    /* a poor implement */
    char string[256];

    printf("Enter text: ");

    fgets(string, 256, stdin);

    toRot13(string);
}