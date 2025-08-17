#include <stdio.h>

int main(){
    int i=72;//&i will store the address of i
    int* j=&i;//int* j declare a variable j of type int pointer 
    int k=67;//
    printf("the address of i is %u \n",&i);
    printf("the address of i is %u \n",j);
    printf("the address of k is %u \n",&k);
    printf("the value at address j is %u\n",*(&i));
    // *J shows the value at j 


    return 0;
}