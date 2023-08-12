// Program to update the time by one second

#include <stdio.h>

// Define Structures
struct time {
int hour;
int minutes; 
int seconds;
};

// Declare Functions
struct time timeUpdate (struct time);

int main(void) {

  struct time currentTime, nextTime;

  // Get input
  printf ("Enter the time (hh:mm:ss): ");
  scanf ("%d:%d:%d", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);

  // Calculate the next time
  nextTime = timeUpdate (currentTime);

  // Print output
  printf ("Updated time is %.2d:%.2d:%.2d\n", nextTime.hour, nextTime.minutes, nextTime.seconds);
  
  return 0;
}

// Define Functions
struct time timeUpdate (struct time now) {
  now.seconds++;
  if (now.seconds == 60) { // Next minute
    now.seconds = 0;
    now.minutes++;
  }
  if (now.minutes == 60) { // Next hour
    now.minutes = 0;
    now.hour++;

    if (now.hour == 24) { // Midnight
      now.hour = 0;
    }
  }

  return now;
}