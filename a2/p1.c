/*CH230-A a2p1
    Muaaz Rajput    
    murajput@jacobs-university.de*/

#include <stdio.h>
int main() {
    double d1, d2, sumd, diffd, sqr;
    int i1, i2, sumi, prodi, sumc, prodc;
    char c1, c2, csum, cprod;
    scanf("%lf\n%lf", &d1,&d2);  // read two doubles and perform operations
    sumd = d1 + d2;
    diffd = d1 - d2;
    sqr = d1 * d1;
    scanf("%d\n%d\n%c\n%c", &i1, &i2, &c1, &c2); // read two integers and chars together to avoid only one char being read
    sumi = i1 + i2; // perform operations on the integers
    prodi = i1 * i2;
    sumc = (int) (c1+c2); // perform operations on the chars and cast them as ints to get int values
    prodc = (int) (c1*c2);
    csum = c1 + c2; // perform operations on the chars without casting
    cprod = c1 * c2;
    
    
    
    // print all the results
    printf("sum of doubles=%lf\n", sumd);
    printf("difference of doubles=%lf\n", diffd);
    printf("square=%lf\n", sqr);
    printf("sum of integers=%d\n", sumi);
    printf("product of integers=%d\n" , prodi);
    printf("sum of chars=%d\n", sumc);
    printf("product of chars=%d\n", prodc);
    printf("sum of chars=%c\n", csum);
    printf("product of chars=%c\n", cprod);



    return 0;


}