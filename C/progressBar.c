#include<stdio.h>
#include<unistd.h>
int main()
{
printf(" #####                     (25%%)\r");
fflush(stdout);
sleep(1);
printf(" #########                 (50%%)\r");  	
fflush(stdout);
sleep(1);
printf(" ############              (75%%)\r");
fflush(stdout);
sleep(1);
printf(" #######################   (100%%)\r");
printf("\nComplete\n");
   
}
