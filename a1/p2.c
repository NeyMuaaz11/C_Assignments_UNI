/* CH230A a1p2.c
    Muaaz Rajput
    murajput@jacobs-university.de */



#include <stdio.h>

int main()  {
    int result; //the result of our calculation//
    result = (2+7) * 9 / 3;
    printf("the result is %d\n", result);
    return 0;
}
/* the format %d needed a matching int value to get replaced with.....
    we created the int variable result but did not use it in our print 
    statement which led to an output of 11802084*/