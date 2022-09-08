#include<stdio.h>
int main(){

int ndays,y,m,d;
printf("Enter the day: ");
scanf("%d",&ndays);
y = ndays/365;
ndays = ndays-(365*y);
m = ndays/30;
d = ndays-(m*30);
printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
return 0;
}
