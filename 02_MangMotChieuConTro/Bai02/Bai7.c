#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Trong C để sử dụng kiểu boolean thì phải include thư viện này
#define MAX_SIZE 100

void randomArr(int *a, int *n);
void output(int *a, int n);
void addElement(int *a, int *n, int x, int k);
void main()
{
    int A[MAX_SIZE], N;
    randomArr(A, &N);
    printf("Noi dung cua mang la:\n");
    output(A, N);
    int x, k;
    printf("\nNhap vao gia tri ma ban muon them: ");
    scanf("%d", &x);
    printf("Nhap vao vi tri ma ban muon them phan tu %d vao: ", x);
    scanf("%d", &k);
    addElement(A, &N, x, k);
    printf("Mang sau khi them:\n");
    output(A, N);

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

// Thêm vào mảng một giá trị x tại vị trí k
// n = 4
// a[] = {1, 5, 7, 2};
// arr   = {a[0], a[1], a[2], a[3]}; 
// Thêm: a[k] = {9};
//TH1: k = 0 => a[k] = a[0] => {9, 1, 5, 7, 2} 
//=> arr = {a[k] = a[0], a[0] = a[0 + 1], a[1] = a[1 + 1], a[2] = a[2 + 1], a[3] = a[3 + 1]};
//TH2: k = 4 => a[k] thêm vào cuối cùng => {1, 5, 7, 2, 9}
//=> arr = {a[0], a[1], a[2], a[3], a[k] = a[4]};
void addElement(int *a, int *n, int x, int k)
{
    for(int i = *n; i >= k + 1; i--)
	{
		*(a + i) = *(a + (i - 1));
	}
    *(a + k) = x;
	(*n)++; 
    
}