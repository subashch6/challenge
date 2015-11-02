#include <stdio.h>
#include <stdlib.h>



int main()
{
    FILE *stream;
    const char* fileName = "reprint.c";
    stream = fopen(fileName, "r");
    fseek(stream, 0, SEEK_END);
    long int chars = ftell(stream);
    fseek(stream, 0, SEEK_SET);
    char * buffer = (char*) malloc(sizeof(char) * chars);
    fread(buffer, 1, chars, stream);
    fseek(stream, 0, SEEK_SET);
    for(int i = 0; i <= chars; i++)
       printf( "%c", buffer[i] );
    return 0;

}
