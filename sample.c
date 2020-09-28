#include<stdio.h>
int main(){
 int *p,i = 5;
 p = &i;
 *p = &i;
 printf("%d",*p);
 return 0;
}
