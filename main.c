#include <stdio.h>

int percent(int a,b){
  int per = (a/b)*100;
  return per;
}

int main(){
  int user;
  int total = 500;

  printf("Enter the marks:");
  scanf("%d",&user);

  int per = percent(user,total);
  printf("percentage:%d\n",per);
  if(per < 60){
    printf("You have to work hard");
  }
  
return 0;
}
