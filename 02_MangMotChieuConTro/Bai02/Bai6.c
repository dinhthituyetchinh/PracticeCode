#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Trong C để sử dụng kiểu boolean thì phải include thư viện này
#define MAX_SIZE 100

void randomArr(int *a, int *n);
void output(int *a, int n);
int checkElement(int *a, int n, int x);
bool checkElement2(int *a, int n, int x);

void main()
{
    int A[MAX_SIZE], N;
    randomArr(A, &N);
    printf("Noi dung cua mang la:\n");
    output(A, N);
    int x;
    printf("\nNhap vao gia tri ma ban muon kiem tra: ");
    scanf("%d", &x);
    if (checkElement(A, N, x) == 1)
    {
       printf("Ton tai %d trong mang", x);
    }
    else
    {
        printf("Khong ton tai %d trong mang", x);

    }

    if (checkElement2(A, N, x) == true)
    {
       printf("\nTon tai %d trong mang", x);
    }
    else
    {
        printf("\nKhong ton tai %d trong mang", x);

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

int checkElement(int *a, int n, int x) 
{
    for (int i = 0; i < n; i++)
    {
       if(*(a + i) == x)
       {
            return 1;
       }
    }
    return 0;
}

bool checkElement2(int *a, int n, int x) 
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