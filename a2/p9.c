/*CH230-A a2p9
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>
#include <ctype.h> // import  library to convert upper to lowercase //

int main() {
    char c;
    scanf("%c", &c); // get input and save in c //


    // branching used to check whether c is a digit, alphabet, or some other symbol and print accordingly //
    if ((int)c >= 48 && (int)c <= 57)
        printf("%c is a digit\n", c);
    else if  ((int)(tolower)(c) >= 97 && (int)tolower(c) <= 122)
        printf("%c is a letter\n", c);
    else
        printf("%c is some other symbol\n", c);

    return 0;

}