#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
char a[1000];
char b[2000];

for(int i = 0; i < 1000; i++)
{
a[i] = 'a';
}

for(int i = 0; i < 2000; i++)
{
b[i] = 'a';
}

char name[2048];
strcpy(name, a);
strcat(name, " = ");
strcat(name, b);

return 0;
}
