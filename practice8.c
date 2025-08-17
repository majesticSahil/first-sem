// #include <stdio.h>
// int main()
// {
//     char str[6];
//     // scanf("%s", str);
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%c", &str[i]);
//         fflush(stdin);
//     }
//     str[5] = '\0';

//     printf("%s", str);

//     return 0;
// }

// to write own strlen function to count
// #include <stdio.h>
// int strlen(char str[]){
//     int i=0,count;
//     char c=str[i];
//     while (c != '\0')
//     {
//         c = str[i];
//         i++;
//     }
//     count=i-1;//subtracting for null character
//     return count;}

// int main()
// {
//     char str[] = "sahilhashmi";
//     printf("%d",strlen(str));
//     return 0;

// }

//////   to make a slice string function
// #include <stdio.h>
// char* slice(char str[], int m, int n)
// {
//     int i = 0;
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];
//     str = ptr1;
//     str[n]='\0';
//     return str;
// }

// int main()
// {
//     char str[] = "sahilhashmi";
//     printf("%s", slice(str, 1, 5));
//     return 0;
// }

////     problem 6 -encryption ascii values
// #include <stdio.h>
// #include <string.h>
// char encrypt(char str[])
// {
//     for (int i = 0; i < strlen(str); i++)
//     {
//         str[i] = str[i] + 1;
//     }
//     printf("%s", str);
// }
// int main()
// {
//     char str[] = "bhai paise bhej de";
//     encrypt(str);
//     return 0;
// }

//////// problem 7-decrypted stringgg
// #include <stdio.h>
// #include <string.h>
// char decrypt(char str[])
// {
//     for (int i = 0; i < strlen(str); i++)
//     {
//         str[i] = str[i] - 1;
//     }
//     printf("%s", str);
// }
// int main()
// {
//     char str[] = "cibj!qbjtf!cifk!ef";
//     decrypt(str);
//     return 0;
// }


////    finding if element is in the string 
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[] = "sahil";
//     int count=0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == 'k')
//         {
//            count = count+1; 
//         }
        
//     }
//     if (count==1){printf("element found");}
//     else{printf("element not found");}
//     return 0;
// }



//////to find count of elements
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[]="sahil hashmi";
//     char k;
    
//     printf("enter element to be found");
//     scanf("%c",&k);
//     int count=0;
//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] == k)
//         {
//            count = count+1; 
//         }
        
//     }
//     if(count>0){printf("element occured %d times \n",count);}
//     else{printf("element not found ");}
    
//     return 0;
// }


