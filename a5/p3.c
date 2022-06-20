/*CH230-A a5p3
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int countlower(char*str); // function prototype //

int main(){
    char str[50];

    // while loop to  repeatedly get string input //
    fgets(str, sizeof(str), stdin);
    while(str[0] != '\n'){
        printf("Lowercase Characters: %d\n", countlower(&str[0]));
        fgets(str, sizeof(str), stdin);
    }

}


int countlower(char*str){
    int i = 0, count = 0;

    // loop to iterate over string and count lowercase characters //
    while (str[i] != '\n'){
        if (str[i] >= 97 && str[i] <= 122){
            count = count + 1;
        }
        i += 1;
    }
    return count;

}