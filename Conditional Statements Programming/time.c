#include<stdio.h>

int main() 
{
    int nTime;
    
    // Ask the user to input time
    printf("Enter time in 24-hour format (HHMM): ");
    scanf("%d", &nTime);
    
    // Check if input is valid
    if (nTime < 0 || nTime > 2359 || (nTime % 100) >= 60) 
        printf("Invalid time entered.\n");
    else 
    {
        // Extract hour from the time
        int nHour = nTime / 100;
        
        // Display messages depending on time value
        if (nHour < 8) 
         // Before 8:00 AM
            printf("You're early today! Good Morning!\n");
        else if (nHour >= 12 && nHour < 18) //  12:00 PM to 5:59 PM
            printf("Good Afternoon!\n");
        else if (nHour >= 18 && nHour <= 23) // 6:00 PM to 11:59 PM
            printf("Good Evening!\n");
        else //  8:00 AM to 11:59 AM
            printf("Good Morning!\n");
    }
    return 0;
}
