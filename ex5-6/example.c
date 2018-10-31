#include <stdio.h>
struct Jungle {
    int tigers;
};

typedef struct ForestWithAnimales {
    int animals;
} Zoo;

int main(int argc, char const *argv[])
{
    typedef unsigned char acharalias;
    acharalias apa = 'd';
    printf("Tree %c \n", apa);
    struct Jungle f = {12};
    printf("Big %d \n", f.tigers);
    Zoo lala = {10};
    printf("<lalal %d \n", lala.animals);
    return 0;
}


