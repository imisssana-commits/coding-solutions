#include <stdio.h>


void calculate_the_maximum(int n, int k) {
  int maxAND=0;
   int maxOr=0;
   int maxXor=0;
   
   for (int a = 1; a <= n; a++)
   {
    for (int b= a+1;b<=n;b++)
    {
        int andResult =a & b;
        int orResult =a|b;
        int xorResult =a^b;
         
        if (andResult < k && andResult >maxAND)
        {
            maxAND = andResult;
        }
    if(orResult < k && andResult >maxAND)
    {
        maxOr=orResult;
    }
    if(xorResult< k && xorResult> maxXor)
    {
        maxXor = xorResult;
    }
    }
   }
   
   printf("%d\n",maxAND);
   printf("%d\n",maxXor);
   printf("%d", maxXor);
}
int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
