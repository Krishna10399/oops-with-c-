#include<stdio.h>

#include<string.h>

void main()
{
    FILE *fp;
    int word=0;
    char ch;
    fp=fopen("%c\\abc.txt","r");
    while (ch=fgetc(fp)!=EOF)
    {
        printf("%c",ch);
        if(ch=='\n'||ch=='\t'||ch=='\0'||ch==' ')
        {
            word++;
        }
    }
    {
        /* code */
    }
    printf("\n\nWORD COUNT %d \n",word);
    printf("%s",fp);
    fclose(fp);
    

    
}