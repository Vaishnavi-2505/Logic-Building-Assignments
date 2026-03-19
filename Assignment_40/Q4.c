///////////////////////////////////////////////////////
//
//  File name :     assignment40-4.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   A  B  C  D  E

///////////////////////////////////////////////////////

void Display()
{
    static char ch ='A';

    if( ch > 'E')
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