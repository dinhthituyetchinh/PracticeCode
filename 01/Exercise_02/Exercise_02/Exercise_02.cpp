//Nhập vào một số đọ ngược lại thì vẫn là số đó
// 121 viết ngược lại vẫn là 121 => true
// 122 viết ngược lại là 221 => false
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>

bool isPalindrome(int x);
char* convertNumToString(int num);
bool isPalindrome2(int number);
void main()
{
	int num;
	printf("Input num: ");
	scanf_s("%d", &num);

	if (isPalindrome(num) == true)
	{
		printf("%d is a palindrome.", num);
	}
	else
	{
		printf("%d is not a palindrome.", num);
	}
	printf("\n=====================================\n");
	if (isPalindrome2(num) == true)
	{
		printf("%d is a palindrome.", num);
	}
	else
	{
		printf("%d is not a palindrome.", num);
	}
	_getch;
}
// Cut n = 121 (p1)
// 121 % 10 = 1
// n = 12(p2)
// 12 % 10 = 2
// n = 1 (p3)
// 1 % 10 = 1
// compare
//
bool isPalindrome(int number) // However, this method is not optimal
{
	long reversedNumber = 0;
	int originalNumber = abs(number);

	while (number != 0) {
		int digit = number % 10;
		reversedNumber = reversedNumber * 10 + digit;
		number /= 10;
	}

	return originalNumber == reversedNumber;
}

char* convertNumToString(int num)
{
	char target[100];
	sprintf_s(target, "%d\n", num);
	return target;
}
bool isPalindrome2(int number)// Method is optimal
{
	char* t = convertNumToString(number);
	int left = 0;
	int right = strlen(t) - 1;

	while (left < right) {
		if (t[left] != t[right]) {
			return false; // not a palindrome
		}
		left++;
		right--;
	}
	return true;
}