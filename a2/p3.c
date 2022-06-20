/*CH230-A a2p3
    Muaaz Rajput    
    murajput@jacobs-university.de*/


#include <stdio.h>

int main() {
    int weeks, days, hours, total_hours = 0;
    printf("Enter Weeks: "); // prompt for getting input //
    scanf("%d", &weeks); // gets input and saves it in weeks // 

    printf("Enter Days: "); // prompt for getting input //
    scanf("%d", &days); // gets input and saves it in days //

    printf("Enter hours: "); // prompt for getting input //
    scanf("%d", &hours); // gets input and saves it in hours // 

    // statements for calculating total hours //
    total_hours = total_hours + (weeks * 168 );
    total_hours = total_hours + (days * 24);
    total_hours = total_hours + hours;

    printf("Total hours: %d", total_hours);

    return 0;
}