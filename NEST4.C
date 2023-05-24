#include<stdio.h>
#include<conio.h>
void main(){
float a,b,c,d;
clrscr();
printf("Enter the value of A:");
scanf("%f",&a);
printf("Emter the value of B:");
scanf("%f",&b);
printf("Enter the value of C:");
scanf("%f",&c);
printf("Enter the value of D:");
scanf("%f",&d);
if (a>b)
{
if(a>c){
 printf("A is Max..");
}else if(d>c){
printf("D is Max....");
}else{
printf("C is Max....");
}
}else{
if(b>c){
printf("B is Max....");
}else if(c>d){
printf("C is Max....");
}else{
printf("D is Max....");
}
}
getch();
}

