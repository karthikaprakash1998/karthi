#include<stdio.h>
int main()
{
int stringEndsWith(char const * const name,char const * const ex)
{
    size_t length = 0;
    char* ldot = NULL;
    if (name == NULL) return 0;
    if (ex == NULL) return 0;
    length = strlen(ex);
    if (length == 0) return 0;
    ldot = strrchr(name, ex[0]);
    if (ldot != NULL)
    {
        return (strncmp(ldot, extension, length) == 0);
    }
    return 0;
}
