/*
Name: Necati
Surname: Koçak
Student ID: 150120053
Purpose of the program:Find super digit of a number.
If number has only 1 digit, then its super digit is number.
If number has more than 1 digit, then its super digit is equal to the super digit of the digit-sum of number.
*/
#include<stdio.h>
#include<math.h>

int n, k, summary;
int number =0;
int digNum = 0;

int numberCreation(int k, int n);

int superDigit(int x);

int digitNumFind(int n);

int sumDigits(int num);

int main()
{
	printf("Please enter a number (n=) :");

	scanf("%d", &n);
	printf("Please enter repetition factor (k=) :");

	scanf("%d", &k);
	digitNumFind(n);

	numberCreation(n, k);

	superDigit(number);
	return 0;
}

int digitNumFind(int n) //In this method we assign to new number.
{
	int newNumber;
	if (n >= 10){
		newNumber = n /10;
		digNum++;
		return digitNumFind(newNumber);
	}
}


int numberCreation(int n, int k) // In this method we generate the number.
{
	if (k > 0){
		number += (n) * pow(pow(10,(digNum+1)),(k-1));
		k--;
		return numberCreation(n, k);
	}
}

int sumDigits(int num) //In this method we collect the digits.
{
	if (num > 0){
		summary += num%10;
		num = num/10;
		return sumDigits(num);
	}
}

int superDigit(int a) //In this method we print superDigit
{
	summary=0;
	if (a < 10){
		printf("Super digit of number %d is %d", number, a);
	}
	else {
		sumDigits(a);
		return superDigit(summary);
	}
	return 0;
}
