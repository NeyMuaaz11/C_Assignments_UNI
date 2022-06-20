/*CH230-A a4p2
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include  <string.h>

int main(){
    char str[50];
    int i = 0;

    // get input string //
    fgets(str, sizeof(str), stdin);
    
    // while loop to print string in pattern //
    while (i < strlen(str) - 1){
        if (i % 2 == 0){
            printf("%c\n", str[i]);
        }
        else{
            printf(" %c\n", str[i]);
        }
        i += 1;
    }

    return 0;
    
}