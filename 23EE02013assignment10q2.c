#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time timediff(struct time t1, struct time t2)
{
    struct time difference;
    difference.seconds = t2.seconds - t1.seconds;
    if (difference.seconds < 0)
    {
        difference.seconds += 60;
        t2.minutes--;
    }
    difference.minutes = t2.minutes - t1.minutes;
    if (difference.minutes < 0)
    {
        difference.minutes += 60;
        t2.hours--;
    }
    difference.hours = t2.hours - t1.hours;
    if (difference.hours < 0)
    {
        difference.hours += 12;
    }
    return difference;
}

int main()
{
    struct time startTime, endTime, difference;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    difference = timediff(startTime, endTime);

    printf("Time difference is %d hours %d minutes %d seconds", difference.hours, difference.minutes, difference.seconds);

    return 0;
}