/*  CH230-A a3p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>

int main(){
    char c;
    int n, i;
    double temp[100], sum = 0, avg, fahr;

    scanf("%c", &c);
    scanf("%d", &n);
    
    // for loop to store temperatures in array //
    for(i = 0; i < n; i++){
        scanf("%lf", &temp[i]);
    }
    
    // switch statements to act according to the input c //
    switch(c){
        case 's':
            for(i = 0; i < n; i++){
                sum += temp[i];
            }
            printf("Sum is %lf\n", sum);
            break;

        case 'p':
            for(i = 0; i < n; i++){
                printf("%lf\n", temp[i]);
            }
            break;

        case 't':
            for(i = 0; i < n; i++){
                fahr = (((double)9/(double)5) * temp[i]) + (double)32;
                printf("%lf\n", fahr);
            }
            break;

        default:
             for(i = 0; i < n; i++){
                sum += temp[i];
            }
            avg = sum / n;
            printf("Average is %lf", avg);

    }
    return 0;
}