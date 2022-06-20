/*  CH230-A a3p9
    Muaaz Rajput    
    murajput@jacobs-university.de*/



#include <stdio.h>

double sum25(double v[], int n);

int main(){
    int n, c = 0;
    double data[20], sum;
    scanf("%d", &n);

    // loop to fill array //
    for(c = 0; c < n; c++){
        scanf("%lf", &data[c]);
    }
    sum = sum25(&data[0], n);
    
    // if statement to check if addition was successful //
    if(sum != -111){
    printf("sum=%lf\n", sum);
    }
    return 0;
}

double sum25(double v[], int n){
    double sum;
    // if statement to make sure positions are valid //
    if(n > 5){
        sum = *(v+2) + *(v+5);
        return sum;
    }
    else{
        printf("One or both positions are invalid\n");
        return -111;
    }

}