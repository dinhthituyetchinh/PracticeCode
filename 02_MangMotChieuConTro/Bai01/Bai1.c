#include <conio.h>
#include <stdio.h>
#define MAX_SIZE 100

void inputArr(int *a, int *n)
{
    do
    {
        printf("Moi ban nhap so luong phan tu: ");
        scanf("%d", n);
        if (*n <= 0)
        {
            printf("So ban nhap khong hop le! Vui long nhap lai\n");
        }
    } while (*n <= 0);
    
    for (int i = 0; i < *n; i++)
    {
        printf("Phan tu thu[%d]: ", i);
        scanf("%d", (a + i));
    }
}


void output(int *a, int n)
{
     for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}

void main()
{
    int A[MAX_SIZE] , N;
    inputArr(A, &N);
    printf("Noi dung cua mang:\n");
    output(A, N);
    getch();
}

