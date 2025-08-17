// #include <stdio.h>
// int main(){
//     int n,i,p;
//     printf("enter any number");
//     scanf("%d",&n);
//     for(i=1;i<=10;i++){p=n*i;
//     printf("%d X %d = %d \n",n,i,p);}
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 10, i, p;
//     for (i = 10; i >= 1; i--)

//     {
//         p = n * i;
//         printf("%d X %d = %d\n", n, i, p);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n = 10, i, p;
//     for (i = 1; i <= 10; i++)

//     {
//         p = n * i;
//         printf("%d X %d = %d\n", n, i, p);
//     }
//     return 0;
// }
// sum of 10 natural number
// #include <stdio.h>

// int main()
// {
//     int i = 1, sum;
//     while (i <= 10){
//         sum = i + sum;
//         i++;}
//     printf("sum  of first 10 natural numbers is %d\n", sum);
//     return 0;
// }

// using do while
// #include <stdio.h>

// int main()
// {
//     int i = 1, sum = 0;
//     do
//     {
//         sum += i;
//         i++;
//     } while (i <= 10);
//     printf("the sum of first 10 natural numbers is%d\n", sum);
//     return 0;
// }

// using for loop
// #include <stdio.h>
// int main(){
//     int i,sum;
//     for(i=1;i<=10;i++){sum+=i;}
//     printf("sum of first 10 natural numbers is %d\n",sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i,sum;
//     for(i=8;i<=80;i+=8){sum+=i;}
//     printf("sum is %d\n",sum);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     int i,sum=0;
//     for(i=1;i<=10;i++){sum+=(8*i);}
//     printf("sum is %d\n",sum);
//     return 0;
// }

// factorial of any number
// #include <stdio.h>

// int main()
// {
//     int product = 1, n, i;
//     printf("enter any number ");
//     scanf("%d", &n);
//     if (n < 0)
//     {
//         printf("Factorial is not defined for negative numbers.\n");
//     }
//     else
//     {
//         for (i = n; i >= 1; i--)
//         {
//             product = product * i;
//         }

//     printf("factorial is %d\n", product);}
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int product = 1, n, i = 1;
//     printf("enter any number ");
//     scanf("%d", &n);
//     while (i <= n && i >= 0)
//     {
//         product = product * i;
//         i++;
//     }
//     printf("factorial of %d is %d", n, product);
//     return 0;
// }
//  to detect prime  numbers
// #include <stdio.h>

// int main()
// {
//     int not_prime = 0, i, n;
//     printf("enter number u want to check");
//     scanf("%d", &n);
//     if (n == 0 || n == 1)
//     {
//         not_prime = 1;
//     }
//     else
//     {
//         for (i = 2; i < n; i++)
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 not_prime = 1;
//                 break;
//             }
//         }
//     }
//     if (not_prime)
//     {
//         printf("%d is not prime", n);
//     }
//     else
//     {
//         printf("entered number is prime");
//     }
//     return 0;
// }


