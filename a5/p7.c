/*CH230-A a5p7
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char str1[100], str2[100];
    char *str;
    int o = 0, t = 0, c = 0, i;


    // get input of both strings //
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // while loops to get length of each string //
    while(str1[o] != '\n'){
        o += 1;
    }
    
     while(str2[t] != '\n'){
        t += 1;
    }

    // dynamic allocation according to total length of both strings //
    str = (char*) malloc(sizeof(char) * (o + t));

    // for loops to concatenate both strings //
    for (i = 0; i < o; i++){
        str[i] = str1[i];
        c += 1;
    }
    
    for (i = 0; i < t; i++){
        str[c] = str2[i];
        c += 1;
    }

    // for loop to print string //
    printf("Result of concatenation: ");
    for (i = 0; i < c; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}