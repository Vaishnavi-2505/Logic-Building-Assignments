///////////////////////////////////////////////////////
//
//  File name :     assignment40-5.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   a  b  c  d  e

///////////////////////////////////////////////////////

void Display()
{
    static char ch ='a';

    if( ch > 'e')
    return;
    {
        printf("%c \t",ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}