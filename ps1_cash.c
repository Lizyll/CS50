#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(){
    while(1){
        string s = get_string("Change owed:");       
        float n = atof(s);
        //printf("%f\n", n);
        if (n < 0){
            printf("Please enter the correct number.");
            continue;
        }
        else{
            int cents = round(n * 100);
            //printf("%d\n", cents);
            int coins = 0;
            while (cents != 0){
                if (cents >=100){
                    int j = round(cents / 100);
                    cents = cents - j * 100;
                }
                else if (cents >= 25){
                    cents = cents - 25;
                    coins +=1;
                }
                else if (cents >= 10){
                    cents = cents - 10;
                    coins +=1;
                }
                else if (cents >= 5){
                    cents = cents - 5;
                    coins +=1;
                }
                else{
                    coins = coins + cents;
                    cents = 0;
                }
            }
            printf("%d\n", coins);
        }
    }
}
