/*
Write a function to receive as parameter the duration of an 
experiment expressed in seconds and print that time in hours, 
minutes and seconds.
*/

#include <stdio.h>

void duration(int sec)
{
    int hours, minutes, seconds;
    hours = sec / 3600;
    minutes = (sec % 3600) / 60;
    seconds = (sec % 3600) % 60;
    printf("%02d:%02d:%02d\n", hours,minutes,seconds);        
}

int main()
{
    duration(10925); // Expected 03:02:03
    return 0;
}
