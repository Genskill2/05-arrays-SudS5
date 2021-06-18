/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[], int n)
{
    int i;

    int h = array[0];
 
    for (i = 1; i < n; i++)
        if (array[i] > h)
            h = array[i];
 
    return h;
}

int min(int array[], int n)
{
    int i;

    int h = array[0];
 
    for (i = 1; i < n; i++)
        if (array[i] < h)
            h = array[i];
 
    return h;
}

float average (int array[], int n){
    int i, sum=0;
    float average = 0;
    for (i = 0; i < n; i++)
        sum += array[i];
        
    average = sum / n;
    return average;
}

int mode(int array[],int n) {
   int mval = 0, mcount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (array[j] == array[i])
         ++count;
      }
      
      if (count > mcount) {
         mcount = count;
         mval = array[i];
      }
   }

   return mval;
}

int factors(int num, int a[])
{
    int no=0, pf, i=0;
    
    for(pf=2;pf<=num;pf++)
    {
        if(num%pf==0)
        {
            num=num/pf;
            a[i]=pf;
            pf=1;
            no++;
            i++;
        }
    }
    return no;
}
