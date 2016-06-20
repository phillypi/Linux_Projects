#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int main(){
system("gnome-terminal -x bash -c ./test; exec SHELL");
return 0;
}
