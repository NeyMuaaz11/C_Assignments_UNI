/*CH230-A a5p11
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int primecheck(int x, int i);

int main(){
    int x;

    scanf("%d", &x);
    // if statement with function call //
    if(primecheck(x, 2) == 1){
        printf("%d is prime\n", x);
    }else{
        printf("%d is not prime\n", x);
    }
}

int primecheck(int x, int i){  
    // if-else statements to check whether number is prime //  
    if (x == i){
        return 1;
    }else if(x == 1){
        return 0;
    }
    else if (x % i == 0){
        return 0;
    }else{
        return primecheck(x, i + 1);
    }


}