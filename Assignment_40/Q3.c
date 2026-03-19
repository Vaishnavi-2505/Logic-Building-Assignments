///////////////////////////////////////////////////////
//
//  File name :     assignment40-3.c
//  Descreption :   write a recursive program which display below pattern.
//  Author :        Vaishanvi D Shingare
//  Date :          28/04/2025
//
//  output  :   5  4   3  2  1
///////////////////////////////////////////////////////

void Display() 
{
    static int i = 5; 
    if (i >= 1) 
    {     
        printf("%d\t", i); 
        i--;              
        Display();        
    }
}

int main() {
    Display();     
    return 0;
}