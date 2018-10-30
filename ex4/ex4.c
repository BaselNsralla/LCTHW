#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("ADADA %s", argv);
    int age;
    int height = 72;
    int apa = 'a';
    printf("aa %c \n", apa);
    //printf("\xc0");
    printf("I am %d years old. \n", age);
    printf("I am %d inches tall. \n", height);    
    crash();
    return 0;
}

void crash() {
    char *test = NULL;
    int i = 0; 
    for(i = 0; i < 1000; i++)
    {
        printf("%c", test[i]);
    }
}
