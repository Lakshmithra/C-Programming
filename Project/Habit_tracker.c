/*
    Habit Tracker in C
    Author      : Lakshmithra
    Created on  : 22 July 2025
    Description : Console-based habit tracker app.
                  Saves user name, habit, streak, and last update.
                  Provides motivational messages based on progress.
*/

#include <stdio.h>
#include <string.h>
#include <time.h>

// Structure to store habit tracking data

struct habit_tracker
{
    char user_name[25];
    char habit_name[30];
    char stored_date[15];
    int streak;
};

// Function for converting time into a formatted string

void showdate(char arr[] , int size){

        time_t today = time(NULL);
        struct tm *t = localtime(&today);
        strftime(arr , size ,"%d-%m-%Y",t); // strftime() formats the current date into "dd-mm-yyyy" format

}

int main(){

    struct habit_tracker obj;

    FILE *fr;
    fr = fopen("Habit_Tracker.txt","r+");

    if(fr == NULL){

           // If file is not found, it means user is opening the app for the first time
    
            FILE *fw;
            fw = fopen("Habit_Tracker.txt","w");
    
             if(fw == NULL){
                printf("File can't be opened !\n");
                return 1;
              }
    
             // Taking user details and initializing habit tracking
    
            printf("Enter your name : ");
    
            fgets(obj.user_name , 25 , stdin );
            obj.user_name[strcspn(obj.user_name, "\n")] = '\0';
    
            fprintf(fw ,"%s\n" ,obj.user_name );
    
            printf("\nHello %s !.\nWelcome to our habit tracker !\n" , obj.user_name);
    
            printf("\nEnter the habit you want to track : ");
    
            fgets(obj.habit_name, 30, stdin);
            obj.habit_name[strcspn(obj.habit_name, "\n")] = '\0';
    
            fprintf(fw ,"%s\n",obj.habit_name );
    
            char response[5];
            printf("\nEvery tick is a transformation. Every step, a statement.\n");

            printf("\nDid you %s today ? (yes / no) ",obj.habit_name);
            scanf("%s",response);

            if(strcmp(response , "yes") == 0){
                 obj.streak = 1;
                 fprintf(fw ,"%d\n",obj.streak);
                 printf("\nYour streak is %d.\nYou're officially unstoppable !\nKeep showing up champ !\nCome back tomorrow !\n",obj.streak);

            }
           else if(strcmp(response ,"no")==0){
                  obj.streak = 0;
                  fprintf(fw ,"%d\n",obj.streak);
                  printf("\nEven warriors rest. Reset and reload !\nThe only bad workout is the one you didn't do !\nCome backs stronger tomorrow !\n");
           }
           else {
                    printf("\nInvalid input. Please enter 'yes' or 'no'.\n");
                }

            showdate(obj.stored_date , 15);    // Get current date
            fprintf(fw ,"%s\n",obj.stored_date);
    
            fclose(fw);
    }

   else {

            // File exists, so this is a returning user
    
            rewind(fr);     // Move file pointer to start
    
            fgets(obj.user_name , 25 , fr );
            obj.user_name[strcspn(obj.user_name, "\n")] = '\0';
    
            printf("\nHello %s !.\nWelcome back to our habit tracker !\n" , obj.user_name );
    
            fgets(obj.habit_name, 30 , fr);
            obj.habit_name[strcspn(obj.habit_name, "\n")] = '\0';
    
            long streak_position = ftell(fr);  // Mark the position before reading streak (for updating later)
            fscanf(fr, "%d\n", &obj.streak);
    
            long date_position = ftell(fr);   // Position before reading date (for updating later)
            fgets(obj.stored_date , 15 , fr);
    
            obj.stored_date[strcspn(obj.stored_date, "\n")] = '\0';
    
            char date[15];
            showdate(date , 15);  // Get today's date to compare
    
            // If already updated today's habit
    
            if (strcmp(obj.stored_date , date ) == 0) {       // strcmp returns 0 if two strings are equal

                  printf("Your streak is %d.\n",obj.streak);
                  printf("\nYou have completed your task today !.\nCome back tomorrow champ !\n");
              }
      
           // If not already updated today's habit
    
            else {
    
                 while(strcmp (obj.stored_date , date) != 0) {
        
                    char response[5];
                    printf("\nEvery tick is a transformation. Every step, a statement.\n");
        
                    printf("\nDid you %s today ? (yes / no) ",obj.habit_name);
                    scanf("%s",response);
        
                    if(strcmp(response ,"yes")==0){
        
                        fseek(fr,streak_position, SEEK_SET);  // Go to streak position
        
                        obj.streak++;
                        fprintf(fr, "%-3d\n", obj.streak);    // Update (overwrite) the streak in the file
        
                        fseek(fr , date_position ,SEEK_SET);   // Go to date position
        
                        strcpy(obj.stored_date , date);
                        fprintf(fr , "%s\n" , obj.stored_date); // Update (overwrite) the date in the file
        
                        printf("\nYour streak is %d.\nYou're officially unstoppable !\nKeep showing up champ !\nCome back tomorrow !\n",obj.streak);
                    }
        
                    else if(strcmp(response ,"no")==0){
        
                        obj.streak = 0;   // Reset streak if habit not completed
        
                        fseek(fr, streak_position, SEEK_SET);
                        fprintf(fr, "%-3d\n", obj.streak);
        
                        fseek(fr , date_position ,SEEK_SET);
                        strcpy(obj.stored_date , date);
                        fprintf(fr , "%s\n" , obj.stored_date);
        
                        printf("\nEven warriors rest. Reset and reload !\nThe only bad workout is the one you didn't do !\nCome backs stronger tomorrow !\n");
                    }
                    else {
                            printf("\nInvalid input. Please enter 'yes' or 'no'.\n");
                            continue;
                         }
    
                }
    
            fclose(fr);
       }
    }
    return 0;
}
