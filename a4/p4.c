/*CH230-A a4p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/
 
#include <stdio.h>
 
int count_consonants(char str[]); // function prototype //
 
int main(){
    char str[100];
 
    fgets(str, sizeof(str), stdin);
 
    // while loop to repeatedly get string input //
    while(*str != '\n'){
        printf("Number of consonants=%d\n", count_consonants(str));
        fgets(str, sizeof(str), stdin);
    }
    return 0;
 
}
 
int count_consonants(char str[]){
    int i = 0, consonants = 0;
 
    // loop to convert string into lowercase //
    while(str[i] != '\n'){
        if (str[i] >= 'A' && str[i] <= 'Z'){ 
            str[i] += 32;
        }
        i += 1;
    }
    i = 0;//reset value of i//
 
    // loop to count number of consonants //
    while(str[i] != '\n'){
    if (str[i] >= 'a' && str[i] <= 'z' && str[i] != 'a' && str[i] != 'e' && 
    str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != ' '){
            consonants += 1;
        }
        i += 1;
    }
    return consonants;
 
}