#include <conio.h>
#include <stdio.h>
#define MAX_SIZE 100

void inputArr(int *a, int *n);
void output(int *a, int n);
int totalOfArr(int *a, int n);
int totalEvenElementOfArr(int *a, int n);

void main()
{
    int A[MAX_SIZE] , N;
    inputArr(A, &N);
    printf("Noi dung cua mang:\n");
    output(A, N);
    printf("\nTong mang: %d\n", totalOfArr(A, N));
    printf("\nTong phan tu chan trong mang: %d\n", totalEvenElementOfArr(A, N));

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

int totalOfArr(int *a, int n)
{
    int total = 0;
     for (int i = 0; i < n; i++)
    {
        total += *(a + i);
    }
    return total;
}

int totalEvenElementOfArr(int *a, int n)
{
    int total = 0;
     for (int i = 0; i < n; i++)
    {
        if((*(a + i)) % 2 == 0)
        {
            total += *(a + i);
        }
    }
    return total;
}