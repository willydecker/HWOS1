//William Decker

#include<stdio.h>
int main(int argc, char** argv){
    // you might consider to use scanf() for user input
   int low = 0, up = 0;
   char input[8];

    while(1){
        printf("please q and hit Enter to exit \n");

        printf("Please enter the lower limit ( an integer only :) ");
	low = atoi(fgets(input, 8, stdin));
	printf("Got %d for low\n", low);
        
        printf("please input the upper limit, upper = \n ");
        up = atoi(fgets(input,8,stdin));
	printf("Got %d for high\n", up);
        
        int count = 0;
        
        for(low; low < (up + 1); ++low){
          if (low%7 != 0){
            count += low;
          }
        }
        
        printf("the total sum of numbers between lower and upper that cannot be divided exactly by 7 is %d \n", count);
    }
    return 0;// do not change this line
}
