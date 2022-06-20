/*CH230-A a2p5
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("\nYou Entered %d\n", a);

    int *ptr_a = &a; // declare and initialize the pointer // 
    printf("Address is %p\n", ptr_a); // print the address of a //

    *ptr_a = *ptr_a + 5; // add 5 to the value of a using the pointer //

    printf("\nModified Value: %d\nAddress is %p", a, ptr_a); // print the modified value with the address // 

    return 0;


}