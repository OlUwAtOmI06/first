#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    // get string array
    string word = get_string("Message: ");
    // convert to  ascil
    int count = 0;
    for(int i = 0, n = strlen(word); i < n; i++){
       int remainder;
       int number = (int)word[i];
       printf("%i," , number);
       // convert to binary
    while (number > 0) {
        remainder = number % 2; // Calculate the remainder
        printf("%d",remainder);

        number = number / 2; // Divide the number by 2
        printf("%i," , number);
        count +=1;
    }
    if(count > 8){

    }
    printf("\n");

    count = 0;
    }
    // convert to emoji
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
