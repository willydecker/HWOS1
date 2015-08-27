//William Decker

#include<stdio.h>
int main(int argc, char** argv){
   int low = 0, up = 0;
   char input[8]; //total numbers possible for input

    while(1){
        printf("please q and hit Enter to exit \n");

        printf("Please enter the lower limit. Integer only. : ");
	low = atoi(fgets(input, 8, stdin));  // sets first user input to low
	printf("Got %d for low\n", low);
        
        printf("please input the upper limit. : ");
        up = atoi(fgets(input,8,stdin));  // sets second user input to up
	printf("Got %d for high\n", up);
        
        int count = 0;  // resets count every time its run
        
        for(low; low < (up + 1); ++low){ // logic
          if (low%7 != 0){
            count += low;
          }
        }
        
        printf("the total sum of numbers between lower and upper /n that cannot be divided exactly by 7 is %d \n", count);
    }
    return 0;// do not change this line
}
