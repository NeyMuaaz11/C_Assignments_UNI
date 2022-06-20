/*CH230-A a6p7
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <math.h>

int set3bits(unsigned char c, int a, int b, int d); // function prototype //

int main(){

    int mask = 128, a, b, d; // mask with binary value 1000 0000 //
    unsigned char c;

    // getting input for unsigned char and bit positions to set //
    scanf("%c", &c); 
    scanf("%d\n%d\n%d", &a, &b, &d);   

    // print statements for decimal and binary representation //
    printf("The decimal representation is: %d\n", (int)c);
    printf("The binary representation is: ");

    // while loop to convert from dec to bin and print //
    while (mask > 0){
        if (((int)c & mask) == 0)
           printf("0");
        else
          printf("1");  
        mask =  mask >> 1;
    }
    printf("\n");
    mask = 128; // resetting mask //

    printf("After setting the bits: ");
    // while loop to convert from dec to bin and print //
    while (mask > 0){
        if ((set3bits(c, a, b, d) & mask) == 0)
           printf("0");
        else
          printf("1");  
        mask =  mask >> 1;
    }
    printf("\n");
}



int set3bits(unsigned char c, int a, int b, int d){
    int result = (int)c;

    /* if statements to compare each passed bit
        position with the same position 
        in unsigned char and act accordingly*/
    if (((int)pow(2, a) & (int)c) == 0){
        result = result + pow(2, a);
    }
    if (((int)pow(2, b) & (int)c) == 0){
        result = result + pow(2, b);
    }
    if (((int)pow(2, d) & (int)c) == 0){
        result = result + pow(2, d);
    }
    return result;
}