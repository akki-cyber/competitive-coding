#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[10];
    int pass = 0;
    char secret[10];

    strcpy(buff,"Password");

    /*
     Enter 11 * 'a' to by pass secret and overwrite pass
	*/
    printf("\n Enter your password: ");
    gets(secret);

    if(strcmp(secret, buff))
    {
        printf ("\n Wrong Password \n");
    }
    else
    {
        printf ("\n Correct Password \n");
        pass = 1;
    }

    if(pass)
        printf ("\n Root privileges given to the user \n");

     printf("\n secret: %p , content %s", &secret[0], secret);
     printf(" len %d", strlen(secret));
     printf(" \n pass address %p value %d", &pass, pass);
     printf("\nbuff: %p, content %s", &buff[0], buff);
     printf(" len %d", strlen(buff));

    return 0;
}
