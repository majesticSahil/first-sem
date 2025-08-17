// ////  function for average of three numbers

// #include <stdio.h>
// float average(int,int,int);
// float average(int x,int y,int z){

// return (x+y+z)/3.0;
// }

// int main(){
//     int a,b,c;
//     printf("enter any three numbers:");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("the average of %d,%d,%d is %f",a,b,c,average(a,b,c));
//     return 0;
// }

////  convert celsius into fahrenhiet
// #include <stdio.h>
// float temp(float);
// float temp(float x){
//     return ((9*x)/5)+32;
// }

// int main(){
//     float c=45;

//      printf("enter temperature in celsius");
//      scanf("%f",&c);
//     printf("temperature in fahrenhiet is %f",temp(c));
//     return 0;
// }

////  to calculate force of attraction
// #include <stdio.h>
// float attraction(float);
// float attraction(float m){return 9.8*m;}

// int main(){
//     float m;
//     printf("enter value of m");
//     scanf("%f",&m);
//     printf("the force of attraction by earth on %f is %f ",m,attraction(m));
//     return 0;
// }

// fibonacci

//    post and pre increment

// #include <stdio.h>

// int main()
// {
//     int a = 4;
//     printf("%d%d%d", a, ++a, a++);
//     return 0;
// }

// #include <stdio.h>
// int sum(int);
// int sum(int n)
// {
//     if (n== 1) { return 1; }
//     return sum(n - 1) + n;
// }
// int main()
// {
//     printf("sum of first 5 natural numbers is %d ",sum(5));

//     return 0;
//   star pattern

// #include <stdio.h>

// int main()
// {
//     int n = 3, i,j;
//     for (i = 0; i < n; i++)
//     {
//         for(j=0;j<2*i+1;j++){
//         printf("*");}
//         printf("\n");
//     }
//     return 0;
// }