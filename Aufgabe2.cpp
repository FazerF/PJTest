#include <stdio.h>
#include <string.h>

using namespace std;

int main(void) {
char buff[15];
int pass = 0;

printf("\n Enter the password : \n");
gets();

if(strcmp(buff, "thegeekstuff"))
{
       printf ("\n Wrong Password \n");
}
else
{
       printf ("\n Correct Password \n");
       pass = 1;
}

if(pass)
{/* Now Give root or admin rights to user*/
       printf ("\n Root privileges given to the user \n");
}
return 0;
}
