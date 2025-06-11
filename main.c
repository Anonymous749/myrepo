#include <stdio.h>

float percent(float a,float b){
  float per;
  per = a/b*100;
  return per;
}

int main(){
   float user;
  float total = 500;
  float per;

  printf("Enter the marks:");
  scanf("%f",&user);

   per = percent(user,total);
  printf("percentage:%.2f\n",per);
  if(per < 60){
    printf("You have to work hard");
  }
  
return 0;
}
