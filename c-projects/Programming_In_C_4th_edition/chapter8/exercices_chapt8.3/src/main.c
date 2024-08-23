/*
 *
 *   Title of project :
 *   Date of creation :
 *   Author(s) : PierreLgol
 *   github : https://github.com/pierrelgol
 *
 *   More on the project :
 *
 *   #TODO(s) :
 *
 *
 */

//--------------------[     DEPENDENCIES DECLARATION     ]--------------------//

#include <stdio.h>
#include <stdlib.h>

//--------------------[     MAIN METHOD     ]--------------------------------//

typedef struct time{

 int day, hour, minute, second;
 
}Time;

Time elapsed_time(Time *t1, Time *t2){

  Time elapsed = {0};
  int t1_ts, t2_ts;

  t1_ts = t1->second + t1->minute * 60 + t1->hour * 3600 + t1->day * 86400;
  t2_ts = t2->second + t2->minute * 60 + t2->hour * 3600 + t2->day * 86400;
  elapsed.second = t2_ts - t1_ts;

  if(elapsed.second >= 60){
    elapsed.minute = elapsed.second / 60;
    elapsed.second %= 60;
  }
  if(elapsed.minute >= 60){
    elapsed.hour = elapsed.minute / 60;
    elapsed.minute %= 60;
  }
  if(elapsed.hour >= 24){
    elapsed.day = elapsed.hour / 24;
    elapsed.hour %= 24;
  }

  return elapsed;
}

int main() {

 Time t1 = {0,12,36,28}, t2 = {0,19,23,49}, t3;

  t3 = elapsed_time(&t1,&t2);
  printf("the time elapsed between t1 (%d D, %d H, %d M, %d S) and t2 (%d D, %d H, %d M, %d S) is : \n",t1.day,t1.hour,t1.minute,t1.second,t2.day,t2.hour,t2.minute,t2.second);
  printf("\n");
  printf("%d D,%d H,%d M,%d S",t3.day,t3.hour,t3.minute,t3.second);
 return EXIT_SUCCESS;
}  