///////////////////////////////////////////////////////
//
//  File name :     assignment40-1.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   *  *  *  *  *
///////////////////////////////////////////////////////

void Display()
{
    static int i = 0;

    while(i < 5)
    {
        printf("*\t",i);
        i++;
    }

}

int main()
{
    Display();

    return 0;
}