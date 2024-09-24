#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'p\n';
    char s1[] = "Anne-Marie\n";
    char s2[] = "Akash";
    int sizeS1 = sizeof(s1);
    printf("The character c is equal to %c\n", c);
    printf("The character s1 is equal to %s, it is %d long\n", s1, sizeS1);

    char s3[20];
    strcpy(s3,s1);
    int sizeS3 = strlen(s3);

    printf("befroe stratefy s3: %s has a size of %d", s3, sizeS3);
}