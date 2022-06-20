/*CH230-A a8p8
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>
#include <stdlib.h>

int isnotalph(char c);

int main(){
    int words = 0;
    FILE *fptr;
    char name[20], c;

    scanf("%s", name);
    fptr = fopen(name, "r");

    /* Loop until end of file reached and check
        if each char is an alphabet or not...if not then
        increment count by one and keep looping until next
        alphabet reached*/
    while ((c = getc(fptr)) != EOF){
        if (isnotalph(c) == 1){
            words += 1;

            c = getc(fptr);
            while (isnotalph(c) == 1)
                c = getc(fptr);

        }
    }

    printf("The file contains %d words\n", words);
    return 0;
}

// Function to check if current character is alphabet or not //
int isnotalph(char c){
    if (c == ' ' || c == ',' || c == '?' || c == '!'
        || c == '.' || c == '\t' || c == '\r' || c == '\n')
        return 1;
    else
        return 0;

}