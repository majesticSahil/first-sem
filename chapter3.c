//if condition
/*#include <stdio.h>

int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("we are inside if\n");
        printf("your age is greater then 10\n");
    }
     if (age%5==0)
    {
        printf("we are inside if\n");
        printf("your age is diviilbe by 5\n");
    }
    return 0;
}*/


//if else statement

//#include <stdio.h>
// int main()
// {
//     int age = 25;
//     if (age > 10)
//     {
//         printf("we are inside if\n");
//         printf("your age is greater then 10\n");
//     }
//     else{
//         printf("your age is not greater then 10\n");
//     }
//     return 0;
// }

//and=&&
//or=||
//not=!
// #include <stdio.h>

// int main(){
//     int a=0;int b=1;
//     printf("the value of a and b is %d\n",a&&b);
//     printf("the value of a or b is %d\n",a||b);
//     printf("the value of not(a) is %d\n",!a);
//     return 0;
// }


//eise if condition
// #include <stdio.h>

// int main(){
//     int age=45;
//     if(age>60){
//         printf("you can drive and you are a senior citzen\n");
//     }
//     else if(age>40){
//         printf("you can drive but you are elder\n");
//     }
//     else if(age>18){
//         printf("you can drive\n");
//     }
//     else{
//         printf("you cannot drive");

//     }
//     return 0;
// }


//short method for if else===a(cond)b?():()

// #include <stdio.h>

// int main(){
//     int a=34;
//     int b=3456;
//     a>b?printf("a is greater then b"):printf("b is greater then a");
//     return 0;
// }

//switch
#include <stdio.h>

int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("you entered 1");
        break;
        case 2:
        printf("you entered 2");
        break;
        case 3:
        printf("you entered 3");
        break;
        case 4:
        printf("you entered 4");
    }
    return 0;
}



