#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char*words[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if (n >=0 && n<=9){
        printf("%s",words[n]);
        
    }else{
        printf("Greater than 9");
    }
    return 0;
}
