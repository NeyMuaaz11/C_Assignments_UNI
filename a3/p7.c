/*  CH230-A a3p7
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
void printform(int n, int m, char c); // function prototype //

int main(){
    int n, m;
    char c;
    scanf("%d\n%d\n%c", &n, &m, &c);
    printform(n, m, c); // function call //
    return 0;
}

void printform(int n, int m, char c){
    int i, d;

    /* nested for loop to print 2-D shape
        outer loop for rows, inner loop for columns */
    for(i = 0; i < n; i++){
        for(d = 0; d < (m + i); d++){
            printf("%c", c);
        }
        printf("\n");
    }
}