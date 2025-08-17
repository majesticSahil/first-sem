// #include <stdio.h>

// int main(){
//     int marks[90];//reserve space to store 90 variables
//     marks[0]=23;
//     marks[1]=3;
//     //we can go till marks[89];
//     printf("marks 0 and marks 1 are %d %d",marks[0],marks[1]);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int marks[5];
//     int i;
//     printf("enter marks of five students\n");
//     for(i=0;i<=4;i++){scanf("%d",&marks[i]);}
//     // scanf("%d",&marks[0]);
//     // scanf("%d",&marks[1]);
//     // scanf("%d",&marks[2]);
//     // scanf("%d",&marks[3]);
//     // scanf("%d",&marks[4]);
//     // printf("marks 0 and marks 1 are %d %d",marks[0],marks[1]);
//     for(i=0;i<=4;i++){printf("the value of marks at index %d is %d\n ",i,marks[i]);}
//     return 0;
// }
// #include <stdio.h>

// int main(){
//     int cgp[]={9,8,7,6,6};
//     for(int i=0;i<=4; i++){printf("the value of array at index %d is %d \n",i,cgp[i]);}
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int a=5;
//     int* ptr =&a;
//     printf("the address of a is %u\n",&a);
//     printf("the address of a is %u\n",ptr);
//     ptr++;//incremented by datatype space for int it is  4 byte
//     printf("the value of ptr is %u\n ",ptr);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int marks[] = {12, 34, 53, 66};
//     int *ptr = &marks[0];
//     // int* ptr=marks;//same as int* ptr=&marks[0];
//     for (int i = 0; i < 4; i++)
//     {
//         //printf("the marks at index %d is %d\n", i, marks[i]);
//         printf("the marks at index %d is %d\n", i, *ptr);
//         ptr++;
//     }

//     return 0;
// }

// 2d array//////
#include <stdio.h>

int main()
{
    int arr[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("enter arr[%d][%d]\n",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }

        return 0;
    }