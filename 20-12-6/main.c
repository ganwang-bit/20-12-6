//#include<stdio.h>
//int main()
//{
//    int a=10000;
//    FILE* pf=fopen();
//    fwrite(&a,4,1,pf);
//    pf=NULL;
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    char ch;
//    while((ch=getchar())!=EOF)
//    {
//        getchar();
//        if(isalpha(ch))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
    FILE*pf=fopen("C:\\Users\\1\\Desktop\\test.txt","r");
    if(pf==NULL)
        printf("%s\n",strerror(errno));
    else
    {
         int ch=fgetc(stdin);
         fputc(ch,stdout);
//        fputc('o',pf);
        //printf("%c",fgetc(pf));
//        printf("%c",fgetc(pf));
    }
    fclose(pf);
    pf=NULL;
    return 0;
}
