#include <stdio.h>
#include <cs50.h>

int main(void){
    while(1){
        float f = get_float("Please input degree Fahrenheit:");
        float c = (5/9.0) * (f - 32);  //have to motify 9 to 9.0 convert it to a float type
        printf("Celcius deree is: %.1f\n", c);
    }
}
