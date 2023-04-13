#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include <time.h>


void *SandwichThread(void *arg)
{
    printf("\n\n\t\t\t\t\t\tThe Sandwich Problem");
    int bread=1,cheese=2,sausage=3;
    int n1,n2,sum=0;
    int count=0;
    int i,j;

    printf("\n\n\n\nFirst student has bread");
    printf("\nSecond student has cheese");
    printf("\nThird student has sausage");

     srand(time(0));
    for(i=0;i<10;i++)
    {

    n1=1+rand()%3;

    while(n2)
    {
    n2=1+rand()%3;

     if(n1!=n2)
        break;
     else
        n2=1+rand()%3;

    }
    //printf("\n%d %d ",n1,n2);
  printf("\n\n\n\nItems selected by senior are  ");
  if(n1==bread)
    printf("bread &");
  else if(n1==cheese)
    printf("cheese &");
  else
    printf("sausage &");

   if(n2==bread)
    printf("bread ");
  else if(n2==cheese)
    printf("cheese ");
  else
    printf("sausage \n\n\n");

    if((bread+n1+n2)==6){
        printf("\n\nFirst Junior Student got the ingredients");
    }

     if((cheese+n1+n2)==6){
        printf("\n\nSecond Junior Student got the ingredients");
     }

    if((sausage+n1+n2)==6){
        printf("\n\nThird Junior Student got the ingredients");
    }

        count++;
        printf("\n%d sandwichs made and eat!!",count);
    }
}

int main()
{
    pthread_t sandwitch;

    pthread_create(&sandwitch, NULL, SandwichThread, NULL);
    pthread_join(sandwitch, NULL);
    return 0;
}
