/*CH230-A a7p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes //
void printupper(char *str, int len);
void printlower(char *str, int len);
void utol(char* str, int len);

int main(){
    char *str, strorig[40];
    int command, len;

    /* function pointer array with three functions with their
        positions corresponding to their command numbers */
    void (*funcs[3]) (char*, int) = {printupper, printlower, utol};

    fgets(strorig, sizeof(strorig), stdin);
    /* dynamic allocation for string with NULL exception */
    str = (char *) malloc(sizeof(char) * strlen(strorig));
    if (str == NULL){
        printf("Memory could not be allocated\n");
        return 0;
    }
    // do-while loop to repeatedly read and execute commands //
    do{
        // contents of str replaced by original string before function call //
        strcpy(str, strorig); 
        len = strlen(str);
        scanf("%d", &command);
        if (command < 4)
            funcs[command - 1](&str[0], len);
    }while(command != 4);

    free(str);
    return 0;
}

void printupper(char *str, int len){
    int i = 0;

    /* for loop with if-statements to check if
        each character is lowercase and act accordingly*/
    for (i = 0; i < len; i++){
        if ((str[i] >= 97) && (str[i] <= 122)){
            str[i] -= 32;
        }
    }
    i = 0;

    // for loop to iterate over string and print //
    for (i = 0; i < len; i++){
        printf("%c", str[i]);
    }
}

void printlower(char *str, int len){  
    int i = 0;

    /* for loop with if-statements to check if
        each character is uppercase and act accordingly*/
    for (i = 0; i < len; i++){
        if ((str[i] >= 65) && (str[i] <= 90)){
            str[i] += 32;
        }
    }
    i = 0;
    // for loop to iterate over string and print //
    for (i = 0; i < len; i++){
        printf("%c", str[i]);
    }

}

void utol(char* str, int len){
    int i = 0;

    /* for loop with if-statements to check whether
        char is upper or lowercase and act accordingly*/
    for (i = 0; i < len; i++){
        if ((str[i] >= 65) && (str[i] <= 90)){
            str[i] += 32;
        }else if ((str[i] >= 97) && (str[i] <= 122)){
            str[i] -= 32;
        }
    }
    i = 0;

    // for loop to iterate over string and print //
    for (i = 0; i < len; i++){
        printf("%c", str[i]);
    }


}