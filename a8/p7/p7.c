/*CH230-A a8p7
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    FILE *fptr1, *fptr2; // declaring two file pointers //
    char ch;

    // opening first input file and the output file in appropriate modes //
    fptr1 = fopen("text1.txt", "r");
    fptr2 = fopen("merge12.txt", "w");

    // while loop to get each char from first file and print in output file //
    ch = getc(fptr1);
    while(ch != EOF){
        putc(ch, fptr2);
        ch = getc(fptr1);
    }
    fprintf(fptr2,"\n");
    fclose(fptr1);

    /* opening second input file using the same pointer and using
        the same while loop to print each character*/
    fptr1 = fopen("text2.txt", "r");
    ch = getc(fptr1);
    while(ch != EOF){
        putc(ch, fptr2);
        ch = getc(fptr1);
    }
    fclose(fptr2);



}