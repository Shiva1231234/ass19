Q=1
/*
#include<stdio.h>

int main()
{
    char str[100];
    int i,count = 0;
    
    scanf("%s",str);
    
    //iterate the string
    for(i = 0; str[i] != '\0'; i++)
    {
        //check each char with any vowel. 'a','e','i','o','u'.
        if( str[i] == 'a' ||
            str[i] == 'e' ||
            str[i] == 'i' || 
            str[i] == 'o' || 
            str[i] == 'u'    )
        {
            //if equal increment the count
            count++;
        }
    }
    
    //print the result
    printf("vowel count = %d\n",count);
    
    return 0;
}
*/
Q=2
/*

    #include <stdio.h>
    #include <string.h>
    void main()
    {
 
        char name[10][8], tname[10][8], temp[8];
        int i, j, n;
 
        printf("Enter the value of n \n");
        scanf("%d", &n);
        printf("Enter %d names n \n", n);
 
        for (i = 0; i < n; i++) 
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
 
        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0) 
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
 
        printf("\n----------------------------------------\n");
        printf("Input NamestSorted names\n");
        printf("------------------------------------------\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("%s\t\t%s\n", tname[i], name[i]);
        }
 
        printf("------------------------------------------\n");
 
    }
*/
Q=3
/*
#include<stdio.h>
int main()
{
     char name[10][20];
     int i,n;

     printf("Enter the number of names (<10): ");
     scanf("%d",&n);

     // reading string from user
     printf("Enter %d names:\n",n);
     for(i=0; i<n; i++)
     scanf("%s[^\n]",name[i]);

     // dispaying strings
     printf("\nEntered names are:\n");
     for(i=0;i<n;i++)
     puts(name[i]);

     return 0;
}
*/
Q=4
/*
#include<stdio.h>
#include<string.h>
int main()
{
   char str[20][50], s1[50];
   int n, i, found=0;

   printf("Enter how many string (names): ");
   scanf("%d", &n);

   printf("Enter %d strings:\n", n);
   for(i=0; i<n; i++)
   {
     scanf("%s", str[i]);
   }

   printf("Enter a string to search: ");
   scanf("%s", s1);

   for(i=0; i<n; i++)
   {
     if(strcmp(s1, str[i]) == 0)
     {
       found=1;
       printf("Found in row-%d\n", i+1);
     }
   }

   if(found==0) printf("Not found");
   return 0;
}*/
Q=6
/*
#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("%s is not a palindrome", string1);
    }    
    else {
        printf("%s is a palindrome", string1);
    }
    return 0;
}*/
Q=9
/*
#include <stdio.h>
void main(){
  int i,f=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",num,f);
}*/
Q=10
/*
#include <stdio.h>
 
void main()
{
	char password[10], username[10], ch;
	int i;
 
	printf("Enter User name: ");
	gets(username);
	printf("Enter the password < any 8 characters>: ");
	for (i = 0; i < 8; i++)
	{
            ch = getchar();
            password[i] = ch;
            ch = '*' ;
            printf("%c", ch);
	}
        password[i] = '\0';
	
	printf("\n Your password is :");
	for (i = 0; i < 8; i++)
	{
            printf("%c", password[i]);
	}
}*/