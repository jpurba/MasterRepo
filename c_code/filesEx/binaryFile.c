#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fpRead;
    FILE *fpWrite;
    char *str;
    char *fileNameRead;
    char *fileNameWrite;
    unsigned short sizeOfString;
    int i=0;
    char ch;
    char *sysStatus = NULL;

    fileNameRead = "datafile_Josua_Purba_11.bin";

    fileNameWrite = "datafile_Josua_Purba_11.txt";

    fpRead = fopen(fileNameRead, "rb");
    if(fpRead==NULL)
    {
        printf("Error!, can't open the file %s \n",fileNameRead);
    }

    fpWrite = fopen(fileNameWrite, "w");
    if(fpWrite==NULL)
    {
        printf("Error !, can't open the file %s \n",fileNameWrite);        
    }

    
    while(1)
    {
        ch = fgetc(fpRead);
        if (ch==EOF)
           break;
        else{
           printf("%c", ch); 
           fputc(ch, fpWrite);
        }

    }

    printf("\n");
    
    fclose(fpRead);
    fclose(fpWrite);
}
