// #include <stdio.h>

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int* ptr =a;
//     printf("the value at address %u is %d",ptr+3,*(ptr+3));
//     return 0;
// }

////storing table of 5 in array
// #include <stdio.h>

// int main(){
//     int a[10];
//     for(int i=0;i<10;i++){
//         a[i]=5*(i+1);
//     }
//     for(int i=0;i<10;i++){
//         printf("the value at index %d is %d \n",i,a[i]);
//     }
//     return 0;
// }

// user input table
//  #include <stdio.h>

// int main(){
//     int arr[10];
//     int n;
//     printf("enter any number to print table of\n");
//     scanf("%d",&n);
//     for (int i=0;i<10;i++){arr[i]=n*(i+1);}
//     for (int i=0;i<10;i++){printf("%d X %d = %d\n",n,(i+1),arr[i]);
//     ;}

//     return 0;
// }

////reverse an array
// #include <stdio.h>
// void printArray(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
// }
// void reverse(int arr[], int n)
// {
//     int temp;
//     for (int i = 0; i < n / 2; i++)
//     {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     reverse(arr, 6);
//     printArray(arr, 6);
//     return 0;
// }

//// to count no. of positive integers

// #include <stdio.h>
// int countarray(int arr[], int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             count = count + 1;
//         }
//     }
//     printf("no. of positive integers are %d ", count);
// }
// int main()
// {
//     int arr[] = {1, -2, 3, -4, 5, -6, 7};
//     countarray(arr,7);
//     return 0;
// }

//
// #include <stdio.h>

// int main()
// {
//     int arr[3][10];
//     int mul[] = {2, 7, 9};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <= 10; j++)
//         {
//             arr[i][j] = mul[i] * (j + 1);
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j <= 10; j++)
//         {
//             printf("the value of arr[i][j] is %d\n", arr[i][j]);
//         }
//     }
//     printf("\n");

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%u\n",&arr[i][j][k]);
            }
        }
    }
    return 0;
}