#include <stdio.h>
#include <conio.h>

void encryption(char *str);
void decryption(int *en);
char str[500],de1[500],de2[500];
int i,j,p,k,c,en[500],de[500];

int main()
{

    printf("Please enter the sentence (max 500 words): ");
    gets(str);
    printf("Please enter the value of k: ");
    scanf("%d",&k);

    encryption(&str);
    decryption(&en);
}

void encryption(char *str)
{

    for(i=0; str[i]; i++)
    {
        if(str[i]>=65&&str[i]<=90)
        {
            en[i]=(str[i]-64+k)%26;
        }

        else if(str[i]>=97&&str[i]<=122)
        {
            en[i]=(str[i]-96+k)%26;
        }
        else
            en[i]=27;

        if(en[i]==27)
        {
                de1[i]=' ';
        }
        else
        {
            if(en[i]==0)
                de1[i]='z';
            if(en[i]==1)
                de1[i]='a';
            if(en[i]==2)
                de1[i]='b';
            if(en[i]==3)
                de1[i]='c';
            if(en[i]==4)
                de1[i]='d';
            if(en[i]==5)
                de1[i]='e';
            if(en[i]==6)
                de1[i]='f';
            if(en[i]==7)
                de1[i]='g';
            if(en[i]==8)
                de1[i]='h';
            if(en[i]==9)
                de1[i]='i';
            if(en[i]==10)
                de1[i]='j';
            if(en[i]==11)
                de1[i]='k';
            if(en[i]==12)
                de1[i]='l';
            if(en[i]==13)
                de1[i]='m';
            if(en[i]==14)
                de1[i]='n';
            if(en[i]==15)
                de1[i]='o';
            if(en[i]==16)
                de1[i]='p';
            if(en[i]==17)
                de1[i]='q';
            if(en[i]==18)
                de1[i]='r';
            if(en[i]==19)
                de1[i]='s';
            if(en[i]==20)
                de1[i]='t';
            if(en[i]==21)
                de1[i]='u';
            if(en[i]==22)
                de1[i]='v';
            if(en[i]==23)
                de1[i]='w';
            if(en[i]==24)
                de1[i]='x';
            if(en[i]==25)
                de1[i]='y';
        }
    }
    printf("\nEncrypted Code is:\n");
    printf(de1);
}

void decryption(int *en)
{
    for(i=0; en[i]; i++)
    {
        if(en[i]==27)
        {
                de2[i]=' ';
        }
        else
        {
            de[i]=en[i]-k;
            if(de[i]<1)
                de[i]=de[i]+26;
            de[i]=de[i]%26;

            if(de[i]==0)
                de2[i]='z';
            if(de[i]==1)
                de2[i]='a';
            if(de[i]==2)
                de2[i]='b';
            if(de[i]==3)
                de2[i]='c';
            if(de[i]==4)
                de2[i]='d';
            if(de[i]==5)
                de2[i]='e';
            if(de[i]==6)
                de2[i]='f';
            if(de[i]==7)
                de2[i]='g';
            if(de[i]==8)
                de2[i]='h';
            if(de[i]==9)
                de2[i]='i';
            if(de[i]==10)
                de2[i]='j';
            if(de[i]==11)
                de2[i]='k';
            if(de[i]==12)
                de2[i]='l';
            if(de[i]==13)
                de2[i]='m';
            if(de[i]==14)
                de2[i]='n';
            if(de[i]==15)
                de2[i]='o';
            if(de[i]==16)
                de2[i]='p';
            if(de[i]==17)
                de2[i]='q';
            if(de[i]==18)
                de2[i]='r';
            if(de[i]==19)
                de2[i]='s';
            if(de[i]==20)
                de2[i]='t';
            if(de[i]==21)
                de2[i]='u';
            if(de[i]==22)
                de2[i]='v';
            if(de[i]==23)
                de2[i]='w';
            if(de[i]==24)
                de2[i]='x';
            if(de[i]==25)
                de2[i]='y';
        }
    }
    printf("\n\nDecrypted Code is:\n");
    printf(de2);
    printf("\n");
}

