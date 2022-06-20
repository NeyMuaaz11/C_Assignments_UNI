/*CH230-A a5p10
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int reverse(int n);

int main(){
    int n;

    scanf("%d", &n);

    reverse(n); // initial function call //

}

int reverse(int n){
    // terminating statement //
    if (n == 0){
        return 1;
    }else{
        printf("%d\n", n);
        reverse(n-1); // recursive call //
    }
    

}