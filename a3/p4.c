/*  CH230-A a3p4
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int position (char line[], char c)
{
    int idx;
    // Loop until end of string //
    for(idx = 0; line[idx] != c && line[idx] != '\0';  idx++)
        printf("%c\n", line[idx]);
    return idx + 1;
}

int main(){
    char line[80];
    while(1){
        printf("Enter String: \n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurence of 'g' is: %d\n", position(line, 'g'));
    }
    return 0;
}

/* The for loop inside position function
    had no execution statements and therefore
    the idx was not incrementing. */