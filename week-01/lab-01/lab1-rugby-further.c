/*
Program: lab1-rugby-further.c
Author: Jake Farrell
Input: Try, Conversion, Penalty, Drop-goal
Output: Prints out the total number of points
*/

/* includes */
#include <stdio.h>
#include <stdlib.h> /* a header file with a function we might need */

int check_zero(int num) {
   if (num > 0){
      return(1);
   } else {
      return(0);
   }
}

int main()
{ //  && atoi(argv[1]) >= 0 && atoi(argv[2]) >= 0 && atoi(argv[3]) >= 0 && atoi(argv[4]) >= 0
      int try, conversion, penalty, drop_goal;
      printf("Please enter 4 values for try, conversion, penalty and drop_goal: \n");
      scanf("%d %d %d %d", &try, &conversion, &penalty, &drop_goal);
      if (check_zero(try) && check_zero(conversion) && check_zero(penalty) && check_zero(drop_goal)){
         try = try * 5;
         conversion = conversion * 2;
         penalty = penalty * 3;
         drop_goal = drop_goal * 3;
         printf("%d\n", try + conversion + penalty + drop_goal);
         return(0);
      } else {
         printf("Please enter 4 seperate values that are greater than zero.\n\n");
         main();
      }
}