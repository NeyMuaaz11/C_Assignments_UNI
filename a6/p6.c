/*CH230-A a6p6
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    int mask = 128; // mask with binary value 1000 0000 //
    unsigned char c;

    scanf("%c", &c);    
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
    return 0;
}