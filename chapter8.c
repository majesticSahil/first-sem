// #include <stdio.h>

// int main()
// {
//     // char st[] = {'a', 'b', 'c', '\0'};
//     char st[] = {"abc"}; // same as above as null character is automatically applied
//     for (int i = 0; i < 3; i++)
//     {
//         printf(" %c ", st[i]);
//     }

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     char st[] = {"abc"}; 
//     // for (int i = 0; i < 3; i++)
//     // {
//     //     printf(" %c ", st[i]);
//     // }
//     //instead of the above work we can directly perform 
//     printf("%s",st);//st is the string name
//     return 0;
// }

//we can use %s with scanf to directly take input string
// #include <stdio.h>

// int main(){
//     char st[4];
//     scanf("%s",st);
//     printf("%s",st);
//     return 0;
// }

// //gets(st)and puts(st)
// #include <stdio.h>
// int main(){
//     char st[30];
//     gets(st);//the entered string is stored in it 
//     puts(st);//prints string and place the cursor in next line
//     //printf("%s",st);
//     return 0;
// }

//storing string as pointer
// #include <stdio.h>
// int main(){
//     char *ptr="sahil";
//     printf("%s",ptr);
//     return 0;
// }


////  strlen() function -excluding null character 
#include <stdio.h>
#include<string.h>
int main(){
    // char st[]="sahil";
    // printf("%d\n",strlen(st));
    // char target[30];
    // //strcpy() will copy the content of 2nd string to 1st string
    // strcpy(target,st);
    // puts(target);
    // //strcat() is used to concatenate string
    // strcat(st,target);
    // puts(st);
    //strcmp()- used to compare two strings
    int a=strcmp("far", "joke");//negative value if first ascii value is less
    int b=strcmp("joke", "far");//positive value if second ascii value is more
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}






