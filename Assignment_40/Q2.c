///////////////////////////////////////////////////////
//
//  File name :     assignment40-2.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   1  2  3  4  5
///////////////////////////////////////////////////////

void Display()
{
    static int i = 1;

    while(i < 6)
    {
        printf("%d \t",i);
        i++;
    }

}

int main()
{
    Display();

    return 0;
}