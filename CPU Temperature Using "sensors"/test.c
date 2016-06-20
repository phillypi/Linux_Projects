#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(){

   while(1){
	system("sensors");
	sleep(1);
	system("clear");
   }
	return 0;
}
