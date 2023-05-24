#include<stdio.h>
#include<conio.h>
void main(){
float a,b,c;
clrscr();
printf("Enter the value of A:");
scanf("%f",&a);
printf("Enter the value of B:");
scanf("%f",&b);
printf("Enter the value of C:");
scanf("%f",&c);
if(a<b)
{
if(a<c){
printf("A is Min....");
}else{
printf("C is Min....");
}
}else{
if (b<c){
printf("B is Min....");
}else{
printf("C is Min....");
}
}

getch();
}