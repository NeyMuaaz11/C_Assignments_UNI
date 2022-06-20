/*CH230-A a3p2
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    char ch, new_ch;
    int n, i = 0;
    
    // getting input integer and char //
    scanf("%c", &ch);
    scanf("%d", &n);
   
   // while loop to iterate over letters //
    while(i <= n){
        new_ch = ch - i;
        printf("%c\n", new_ch);
        i += 1;
    }
    return 0;

}