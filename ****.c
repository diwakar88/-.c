/*
Name:Diwakar kandel
Roll No:07
Subject:programming fundamental
program:WAP to print the following pattern
Date:
*/
#include<stdio.h>
int main()
{
int i,j;
for(i=1;i<=5;i++)
{
  for(j=1;j<=5;j++)
  {
	  if(i<=j){
	  printf("*");
	}
 
 else
 {
 printf(" ");
}
 
}
printf("\n");
}
 return 0;
}
