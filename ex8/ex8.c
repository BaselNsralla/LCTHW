#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    int user_arguments = argc - 1;
    if (user_arguments == 1) {
        printf("You only have one argummnet, You suck \n");
    } else if (user_arguments > 1 && user_arguments < 4) {
        printf(" HERE's your %d arguments non sucker: \n", user_arguments);
        for(i = user_arguments; i > 0; i--){
            /* 
            changing what the pointer at (argv i) is pointing to in memory
            argv[i] = argv[i] - 1;
            */
            printf("%c ",(int)*argv[i]);
        }
        printf("\n");
    } else {
        printf("You have tooo many arguments or nothing, go home! \n");
    }
    return 0;
}
