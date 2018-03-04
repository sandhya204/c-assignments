#include<stdio.h>
struct TIME
{
int seconds;
int minutes;
int hours;
};
void differencebetweentimeperiods(struct TIME t1,struct TIME t2, struct TIME *diff);

int main()
{
struct TIME starttime,stoptime,diff;

printf("enter start time:\n");
printf("enter hours,minutes and seconds:");
scanf("%d%d%d",&starttime.hours,&starttime.minutes,&starttime.seconds);

printf("enter stop time:\n");
printf("enter hours,minutes and seconds:\n");
scanf("%d%d%d",&stoptime.hours,&stoptime.minutes,&stoptime.seconds);


printf("\n time difference: %d:%d:%d-",starttime.hours,starttime.minutes,starttime.seconds);
printf("%d:%d:%d",stoptime.hours,stoptime.minutes,stoptime.seconds);
printf("=%d:%d:%d\n",diff.hours,diff.minutes,diff.seconds);

return 0;
}

void differencebetweentimeperiod(struct TIME start,struct TIME stop,struct TIME *diff)
{
if(stop.seconds > start.seconds){
--start.minutes;
start.seconds+=60;
}

diff->seconds = start.seconds-stop.seconds;
if(stop.minutes>start.minutes){
--start.hours;
start.minutes+=60;
}
diff->minutes=start.minutes-stop.minutes;
diff->hours=start.hours-stop.hours;
}