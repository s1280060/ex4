#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Rand(int min,int max);

int main(void){
  int i,num;
  int total=0;

  srand((unsigned int)time(NULL));
  
  printf("Rolling the dice\n");
  for(i=0;i<2;i++){
    num=Rand(1,6);
    printf("Die %d:%d\n",i,num);
    total+=num;
  }

  printf("Total value:%d\n",total);
  return 0;
}

int Rand(int min,int max)
{
	return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}
