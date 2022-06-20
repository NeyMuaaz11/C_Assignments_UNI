/*CH230-A a4p12
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <string.h>

void replaceAll(char*str, char c, char e);

int main(){
    char str[80], c, e;
    int end;

    do{
        fgets(str, sizeof(str), stdin);
        end = strcmp(str, "stop");
        if(end == 0){
            break;
        }else{
            scanf("%c\n%c", &c, &e);
    
            printf("The character to be replaced is %c\n", c);
            printf("The character replacing it is %c\n", e);
            printf("String before replacement is %s\n", str);

            replaceAll(&str[0], c, e);

            printf("String after replacement is %s", str);
        }
    }while(end != 0);

    return 0;

}

void replaceAll(char*chr, char c, char e){
    int i = 0;
    while(*(chr + i) != '\n'){
        if(*(chr + i) == c){
            *(chr + i) = e;
        }
    }
}