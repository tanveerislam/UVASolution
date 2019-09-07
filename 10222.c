#include<stdio.h>
int main()
{
    char c;
    while ( scanf("%c",&c)==1)
    {
        if (c=='2')
            printf("`");
       else if (c=='3')
            printf("1");
       else if (c=='4')
            printf("2");
       else if (c=='5')
            printf("3");
       else if (c=='6')
            printf("4");
       else if (c=='7')
            printf("5");
       else if (c=='8')
            printf("6");
       else if (c=='9')
            printf("7");
      else  if (c=='0')
            printf("8");
       else if (c=='-')
            printf("9");
       else if (c=='=')
            printf("0");
       else if (c=='e'||c=='E')
            printf("q");
       else if (c=='r'||c=='R')
            printf("w");
       else if (c=='t'||c=='T')
            printf("e");
       else if (c=='y'||c=='Y')
            printf("r");
       else if (c=='u'||c=='U')
            printf("t");
       else if (c=='i'||c=='I')
            printf("y");
       else if (c=='o'||c=='O')
            printf("u");
       else if (c=='p'||c=='P')
            printf("i");
       else if (c=='[')
            printf("o");
       else if (c==']')
            printf("p");
       else if (c=='\\')
            printf("[");
       else if (c=='d'||c=='D')
            printf("a");
       else if (c=='f'||c||'F')
            printf("s");
       else if (c=='g'||c=='G')
            printf("d");
      else  if (c=='h'||c=='H')
            printf("f");
       else if (c=='j'||c=='J')
            printf("g");
       else if (c=='k'||c=='K')
            printf("h");
       else if (c=='l'||c=='L')
            printf("j");
       else if (c==';')
            printf("k");
       else if (c=='\'')
            printf("l");
       else if (c=='c'||c=='C')
            printf("z");
       else if (c=='v'||c=='V')
            printf("x");
       else if (c=='m'||c=='M')
            printf("b");
       else if (c=='b'||c=='B')
            printf("c");
       else if (c=='n'||c=='n')
            printf("v");
       else if (c==',')
            printf("n");
       else if (c=='.')
            printf("m");
       else if (c=='/')
            printf(",");
       /* if (c=='')
            printf("");
        if (c=='')
            printf("");
        if (c=='')
            printf("");
        if (c=='')
            printf("");*/
      else  if (c==' ')
            printf(" ");
        else if (c=='\n')
            printf("\n");
    }
    return 0;
}
