#include <stdio.h>
struct TIME {
   int seconds;
   int minutes;
   int hours;
};

void differenceBetweenTimePeriod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);

int main() {
   struct TIME startTime, stopTime, diff;

   printf("Enter the start time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &startTime.hours,
         &startTime.minutes,
         &startTime.seconds);

   printf("Enter the stop time. \n");
   printf("Enter hours, minutes and seconds: ");
   scanf("%d %d %d", &stopTime.hours,
         &stopTime.minutes,
         &stopTime.seconds);

   // Difference between start and stop time
   differenceBetweenTimePeriod(startTime, stopTime, &diff);
   printf("\nTime Difference: %d:%d:%d - ", startTime.hours,
          startTime.minutes,
          startTime.seconds);
   printf("%d:%d:%d ", stopTime.hours,
          stopTime.minutes,
          stopTime.seconds);
   printf("= %d:%d:%d\n", diff.hours,
          diff.minutes,
          diff.seconds);
   return 0;
}

// Computes difference between time periods
void differenceBetweenTimePeriod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff) {
   while (start.seconds > stop.seconds) {
      --stop.minutes;
      stop.seconds += 60;
   }
   diff->seconds = stop.seconds - start.seconds;
   while (start.minutes > stop.minutes) {
      --stop.hours;
      stop.minutes += 60;
   }
   diff->minutes = stop.minutes - start.minutes;
   diff->hours = stop.hours - start.hours;

   if(diff->hours < 0){
      diff->hours += 24; 
   }
}
