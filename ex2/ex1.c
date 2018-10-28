 #include <stdio.h>

/* This is a comment */ 
int main(int argc, char *argv[]) {
    int distance = 100;
    char buffer [100];
    snprintf(buffer, 12, "hest 'r %d år", 50000001);
    printf("You are %d miles away. \n", distance);
    printf("Generated ape: %s", buffer);
    return 0;
}