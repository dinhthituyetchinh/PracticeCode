#include <conio.h>
#include <stdio.h>
#define MAX_SIZE 100

void inputArr(int *a, int *n);
void output(int *a, int n);
void outputEvenNumber(int *a, int n);

void main()
{
    int A[MAX_SIZE] , N;
    inputArr(A, &N);
    printf("Noi dung cua mang:\n");
    output(A, N);
    printf("\nCac so chan trong mang:\n");
    outputEvenNumber(A, N);
    getch();
}


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
        scanf("%d", (a + i)); // (a + i) == &a[i]
    }
}


void output(int *a, int n)
{
     for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));// *(a + i) == a[i]
    }
}

void outputEvenNumber(int *a, int n)
{
     for (int i = 0; i < n; i++)
    {
       if((*(a + i)) % 2 == 0)
       {
         printf("%d\t", *(a + i));
       }
    }
}