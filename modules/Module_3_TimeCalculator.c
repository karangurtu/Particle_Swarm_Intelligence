#include <time.h> //header needed to use the function 
#include<stdio.h>
int main()
{
//clock_t is capable of calculating processor time and clock funcion is capable of returning the clock time since the program is started
clock_t start = clock(); 
/*
write the program for which you need to calculate the time used by cpu
*/
clock_t end = clock();
double time = ((double)(end - start))/CLOCKS_PER_SEC;    //number of processor clock ticks per second is CLOCKS_PER_SEC
time=time*1000000;
printf("%f\n",time); //Time in Micro Seconds 10^-6
}




