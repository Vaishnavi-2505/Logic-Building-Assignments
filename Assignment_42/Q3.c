///////////////////////////////////////////////////////
//
//  File name :     assignment40-3.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   5  4   3  2  1
///////////////////////////////////////////////////////

void Display(int iNo)
{
    static int i = 1;

    for ( i = iNo; i >= 1; i--)
    {
        printf("%d \t",i);
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0 ;
}