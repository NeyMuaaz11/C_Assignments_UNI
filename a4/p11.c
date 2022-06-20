/*CH230-A a4p11
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int count_insensitive(char* str, char c){
    int count = 0, i = 0;
    while(*(str + i) != '\n'){
        if(tolower(*(str + i)) == tolower(c)){
            count += 1;
        }
        printf("%c\n", *(str+i));
        i += 1;
    }
    return count;
}

int main(){
    char *str, c;

    str = (char*) malloc(sizeof(char) * 50);

    fgets(str, sizeof(str), stdin);
    c = getchar();

    printf("%c occurs %d times", c, count_insensitive(&str[0], c));

    
}