// This program demonstrates how to get and format the current local time in C.

#include <stdio.h>
#include <time.h>      // Required for time-related functions

int main(){

       // Step 1: Get current time in seconds since Jan 1, 1970 (Epoch time)
  
    time_t current = time(NULL);

      // Step 2: Print the current time as seconds (raw form)
      // %ld is used because time_t is a long integer
  
    printf("CURRENT TIME IN SECONDS : %ld \n",(long)current);

      // Step 3: Convert and print the current time as a readable string (e.g., "Tue Jul 16 15:47:00 2025")
  
    printf("CURRENT TIME IN STRING  : %s\n",ctime(&current));

     // Step 4: Convert time to local time (broken-down form: hour, minute, day, etc.)
  
    struct tm *local = localtime(&current);

     // Step 5: Print individual components of local time
  
    printf("Year   : %d\n", 1900 + local->tm_year);   // tm_year is years since 1900
    printf("Month  : %d\n", 1 + local->tm_mon);       // tm_mon is months since January (0-11)
    printf("Day    : %d\n", local->tm_mday);          // Day of the month (1–31)
    printf("Hour   : %d\n", local->tm_hour);          // Hours since midnight (0–23)
    printf("Minute : %d\n", local->tm_min);           // Minutes after the hour (0–59)
    printf("Second : %d\n", local->tm_sec);           // Seconds after the minute (0–60)


     // Step 6: Format the time into a custom string using strftime
  
    char tm [100];            // Buffer to hold formatted string
  
     // Format: DD-MM-YYYY HH:MM:SS
  
    strftime(tm,sizeof(tm),"%d-%m-%Y %H:%M:%S" , local);
    printf("\nFormatted time : %s",tm); // Step 7: Print the formatted string

    return 0;

}
/*
    Essential Things to Know About Time in C

    1. time_t:
       - A special data type that stores time as the number of seconds 
         since Jan 1, 1970 (called "Epoch time").
       - This is the base format used in all time functions.

    2. time(NULL):
       - Gives the current time in seconds (as a time_t value).
       - Commonly used to get "now".

    3. ctime():
       - Converts a time_t value into a human-readable string.
       - Example output: "Tue Jul 16 15:53:20 2025\n"
       - Simple to use, but the format can't be changed.

    4. localtime():
       - Converts time_t into a struct tm*, which holds time broken down 
         into parts like year, month, day, hour, etc.
       - Useful when you want to format time your own way using strftime().

    5. struct tm:
       - A structure that holds individual parts of a time:
         - tm_year → years since 1900
         - tm_mon  → months since January (0–11)
         - tm_mday → day of the month
         - tm_hour → hour (0–23)
         - tm_min  → minute (0–59)
         - tm_sec  → second (0–59)

    6. strftime():
       - Lets you format the time into a string however you want.
       - You must use it with a struct tm*, usually from localtime().
       - Example format: "%d-%m-%Y %H:%M:%S"

    General Use:
       1. Get time using time(NULL)
       2. Convert to local time using localtime()
       3. Format using strftime() or just print using ctime()

    ctime() = quick default string
    strftime() = customizable format (needs struct tm)

    Don't forget to include <time.h> for all of this!
*/
