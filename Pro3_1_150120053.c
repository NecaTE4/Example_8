/*
Name: Necati
Surname: Koçak
Student ID: 150120053
Purpose of the program:We have bunnies 1, 2 standing in line. Single bunnies (1, 3, ..) have 2 normal ears.
Double rabbits (2, 4, ..) have 3 ears, because each has a raised foot. Return the number of “ears” in the bunny line.
*/
#include <stdio.h>

int sum, steps=1;

int calculation(int );
int main()
{
    int number=0;
    printf("Please enter the number of lines(n=): ");
    scanf("%d",&number);
    printf("bunnyEars2(0) -> 0\n");
    calculation(number);
    return 0;
}

calculation(int value) //In if else, we look at the farm uniqueness and print it.
//Each time we reduce the value and make it recursive.
//In this way, we do not use loops and when it reaches 0, the code is completed.
{
    if(value == 0) return 0;
    else if(value%2==1)
    {
        sum+=3;
        printf("bunnyEars2(%d) -> %d\n",steps,sum);
        steps++;
        value--;
        return  calculation(value);
    }
    else
    {
        sum+=2;
        printf("bunnyEars2(%d) -> %d\n",steps,sum);
        steps++;
        value--;
        return calculation(value);
    }
}
