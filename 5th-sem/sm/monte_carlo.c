#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
  int i,itr,m=0,n=0;
  printf("Enter number of iterations: ");
  scanf("%d",&itr);
  double x, y;
  
  srand(time(0));

  for(i=1; i<=itr; i++){
      x = (double)rand() / RAND_MAX;
      y = (double)rand() / RAND_MAX;

      if(x*x + y*y <=1){
          m++;
      }

      n++;
  }

  double pi = (double) m/n *4;

  printf("Approximate value of pi: %f\n", pi);
  
  return 0;
}

