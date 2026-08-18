#include <stdio.h>

int main()
{
    int total_sec, hr, min, sec;
    /*
       Here hr denotes hour
            min denotes minutes
            sec denotes seconds
    */

    printf("Enter the total seconds that you want to convert in hr:min:sec format:");
    scanf("%d", &total_sec);

    hr = total_sec / 3600;
    min = (total_sec % 3600) / 60;
    sec = total_sec % 60;

    printf("The time after conversion is %d:%02d:%02d\n", hr, min, sec);

    return 0;
}