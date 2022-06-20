/*CH230-A a8p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    FILE *fptr; // file pointer //
    int sum;

    /* fptr opens chars file in read mode
        and gets the first two characters,
        calculates their sum, and stores it 
        in sum variable*/
    fptr = fopen("chars.txt", "r");
    sum = getc(fptr) + getc(fptr);
    
    /* fptr opens codesum file in write mode
        and prints the value from the sum variable
        in the file*/
    fptr = fopen("codesum.txt", "w");
    fprintf(fptr, "%d\n", sum);



}