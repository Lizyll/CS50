#include <cs50.h>
#include <stdio.h>

int main(void)
{   
    while(1){
        string n = get_string("Height:");
        int h = atoi(n);  //convert string to int
        if (h < 1){
            continue;
        }
        /*
        else{
            for(int i = 0; i < h; i++){  //control the lines
                for(int j = 0; j < i + 1; j++){  //control the number of '#'
                    printf("#");
                }
                printf("\n");
            }
        }
        */
         else{
            for(int i = 0; i < h; i++){  //control the lines
                for(int j = 0; j < h-i-1; j++){  //control the number of '.'
                    printf(" ");
                }
                for(int z = 0; z < i + 1; z++){  //control the number of '#'
                        printf("#");
                    }
                printf("\n");
            }
        }
    }
}
