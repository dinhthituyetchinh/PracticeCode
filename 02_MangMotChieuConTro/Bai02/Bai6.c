#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

void randomArr(int *a, int *n);
void output(int *a, int n);
bool checkElement(int *a, int n, int x);

void main()
{
    int A[MAX_SIZE], N;
    randomArr(A, &N);
    printf("Noi dung cua mang la:\n");
    output(A, N);
    int x;
    printf("\nNhap vao gia tri ma ban muon kiem tra: ");
    scanf("%d", &x);
    if (checkElement(A, N, x) == true)
    {
       printf("Tồn tại %d trong mảng", x);
    }
    else
    {
        rintf("Không tồn tại %d trong mảng", x);

    }
    getch();
}

void randomArr(int *a, int *n)
{
    do
    {
        printf("Nhap so luong phan tu: ");
        scanf("%d", n);
        if(*n <= 0)
        {
            printf("Vui long nhap lai!");
        }
    } while (*n <= 0);
    srand((int)time(0));
    for (int i = 0; i < *n; i++)
    {
        *(a + i) = rand() % 100 - 51;       
    }
    
}


void output(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", *(a + i));
    }
}

bool checkElement(int *a, int n, int x) // Err
{
    for (int i = 0; i < n; i++)
    {
       if(*(a + i) == x)
       {
            return true;
       }
    }
    return false;
}