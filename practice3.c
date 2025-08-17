
/*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
    */
// #include <stdio.h>

// int main(){
//     int marks;
//     char grade;
//     printf("enter your marks:");
//     scanf("%d",&marks);
//     if (marks>=90 && marks<=100){
//         grade='A';
//     }
//     else if (marks>=80 && marks<=90){
//         grade='B';
//     }
//     else if (marks>=70 && marks<=80){
//         grade='C';
//     }
//     else if (marks>=60 && marks<=70){
//         grade='D';
//     }
//     else if (marks>=50 && marks<=60){
//         grade='E';
//     }
//     else{
//         grade='F';
//     }
//     printf("%c",grade);
//     return 0;
// }

// wether student is pass or fail

// #include <stdio.h>

//  int main(){
//     float a,b,c,percent;
//     printf("enter your marks in english subject:");
//     scanf("%f",&a);
//     printf("enter your marks in maths subject:");
//     scanf("%f",&b);
//     printf("enter your marks in maths subject:");
//     scanf("%f",&c);
//     percent=(a+b+c)/3;
//     if(a>=33 && b>33 && c>33 && percent>=40){
//         printf("pass");
//     }
//     else{
//         printf("fail");
//     }
//     return 0;
//  }

// //income tax code
// #include <stdio.h>

// int main(){
//     float i;
//     printf("enter your income");
//     scanf("%f",&i);
//     if (i>=250000 && i<=500000){
//         printf("tax to be payed is: %f rupees",0.05*i);
//     }
//     if (i>500000 && i<=1000000){
//         printf("tax to be payed is: %f rupees",0.2*i);
//     }
//     if (i>=1000000){
//         printf("tax to be payed is: %f rupees",0.3*i);
//     }
//     else{
//         printf("no tax to be payed");
//     }
//     return 0;
// }

// to find if yer is a leap year or not
// #include <stdio.h>

// int main(){
//     int y;
//     printf("enter any year");
//     scanf("%d",&y);
//     if((y%4==0 && y%100!=0) || (y%400==0)){
//         printf("entered year is leap year");
//     }
//     else{
//         printf("entered year is not leap year");
//     }
//     return 0;
// }

//65 to 90 is for uppercase alphabets
//97 to 122 is lowercase alphabets
// #include <stdio.h>

// int main(){
//     char ch='a';
//     printf("enter any character:");
//     scanf("%c",&ch);
//     printf("the ascii value of entered character is %d\n",ch);
//     if(ch>=97 && ch<=122){printf("entered character is in lowercase\n");}
//     else{printf("entered character is in uppercase\n");}
//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int a,b,c,d;
//     printf("enter first number");
//     scanf("%d",&a);
//     printf("enter second number");
//     scanf("%d",&b);
//     printf("enter third number");
//     scanf("%d",&c);
//     printf("enter fourth number");
//     scanf("%d",&d);
//     if (a>b&&a>c&&a>d){printf("%d is the greatest",a);}
//     else if(c>b&&c>a&&c>d){printf("%d is the greatest",c);}
//     else if(b>c&&b>a&&b>d){printf("%d is the greatest",b);}
//     else if(d>b&&d>a&&d>c){printf("%d is the greatest",d);}
//     return 0;
// }




