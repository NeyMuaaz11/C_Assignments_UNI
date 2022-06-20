/*CH230-A a5p1
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    int n;
    char ch;

    scanf("%d\n%c", &n, &ch);

    for (int i = n; i > 0; i--){
        for (int j = i; j > 0; j--){
            printf("%c", ch);
        }
        printf("\n");
    }
}
