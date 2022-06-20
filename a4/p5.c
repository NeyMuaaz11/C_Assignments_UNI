/*CH230-A a4p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/
 
#include <stdio.h>
 
int count_consonants(char str[]); // function prototype //
 
int main(){
    char str[100];
    
    /* while loop to get inputs and print
        number of consonants until 
        empty string entered */
    while(str[0] != '\n'){
        fgets(str, sizeof(str), stdin);
        printf("Number of consonants=%d\n", count_consonants(&str[0]));
    }    
}

int count_consonants(char* str){
    int consonants = 0;

    while(*str != '\n'){
        // if statement to convert to lowercase //
        if (*str >= 'A' && *str <= 'Z'){
            *str += 32;
        }
        // if statement to check whether char is consonant or not //
        if (*str >= 'a' && *str <= 'z' && *str != 'a' && *str != 'e' 
        && *str != 'i' && *str != 'o' && *str != 'u' && 
        *str != ' '){
            consonants += 1;
        }
        str += 1;
    }
    return consonants;

}