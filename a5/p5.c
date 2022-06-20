/*CH230-A a5p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
#include <stdlib.h>

// function prototypes //
double scproduct(double *v, double *w, int n);
void positions(double *v, double *w, int n);

int main(){
    double *v, *w;
    int n;


    // allocating memory for n doubles //
    scanf("%d", &n);
    v = (double*) malloc(sizeof(double)*n);
    w = (double*) malloc(sizeof(double)*n);
    
    // loops to get n inputs for each vector //
    for(int i = 0; i < n; i++){
        scanf("%lf", &v[i]);
    }
    for(int i = 0; i < n; i++){
        scanf("%lf", &w[i]);
    }

    printf("Scalar product=%lf\n", scproduct(v, w, n));
    positions(v, w, n);
    
    // freeing memory allocated to v and w //
    free(v);
    free(w);

    return 0;

}

double scproduct(double *v, double *w, int n){
    double product = 0;

    // for loop to implement scalar product formula //
    for(int i = 0; i < n; i++){
        product = product + ((*v) * (*w));
        v += 1;
        w += 1;
    }
    return product;
}

void positions(double *v, double *w, int n){
    float max = 0, min = 100000000;
    int  posl, poss, i = 0;

    /* for loop followed by print statements
        to find max and min for v and print them*/
    for(i = 0; i < n; i++){
        if (*v > max){
            max = *v;
            posl = i;
        }
        if (*v < min){
            min = *v;
            poss = i;
        }
        v += 1;
    }
    printf("The smallest = %lf\nPosition of smallest = %d\n", min, poss);
    printf("The largest = %lf\nPosition of largest = %d\n", max, posl);

    // resetting the values for max and min for w //
    max = 0;
    min = 100000000;

    /* for loop followed by print statements
        to find max and min for w and print them*/
    for(i = 0; i < n; i++){
        if (*w > max){
            max = *w;
            posl = i;
        }
        if (*w < min){
            min = *w;
            poss = i;
        }
        w += 1;
    }
    printf("The smallest = %lf\nPosition of smallest = %d\n", min, poss);
    printf("The largest = %lf\nPosition of largest = %d\n", max, posl);
}