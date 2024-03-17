//Ví dụ 1:
//Input: nums = [2, 7, 11, 15], target = 9
//Output : [0, 1]
//Explanation : Because nums[0] + nums[1] == 9, we return[0, 1].
// 
//Ví dụ 2 :
//	Input : nums = [3, 2, 4], target = 6
//	Output : [1, 2]
// 
//	Ví dụ 3 :
//	Input : nums = [3, 3], target = 6
//	Output : [0, 1]

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX_SIZE 100

void inputArr(int num[], int &n);
void outputArr(int num[], int n);
int* totalTwoNumber(int num[], int target, int n);

void main()
{
	int a[MAX_SIZE], n;
	inputArr(a, n);
	outputArr(a, n);
	int target;
	printf("\nInput target: ");
	scanf_s("%d", &target);
	int *result = totalTwoNumber(a, target, n);
	printf("Index of two numbers: [%d, %d]", result[0], result[1]);
	free(result);
	_getch;
}

void inputArr(int num[], int &n)
{
	do {
		printf("Input n: ");
		scanf_s("%d", &n);
		if (n <= 0)
		{
			printf("Error. Input again!!!");
		}
	} while (n <= 0);

	for (int i = 0; i < n; i++)
	{
		printf("num[%d]: ", i);
		scanf_s("%d", &num[i]);
	}
}

void outputArr(int num[], int n)
{
	printf("Output:\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", num[i]);
	}
}
int* totalTwoNumber(int num[], int target, int n)
{
	int * returnSize = (int*) malloc(n*sizeof(int));
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++)
		{
			if (num[i] + num[j] == target)
			{
				returnSize[0] = i;
				returnSize[1] = j;
				return returnSize;
			}
		}
	}
	free(returnSize);
	return NULL;
}
