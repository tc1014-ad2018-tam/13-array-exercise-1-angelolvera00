/* This program was made for the purpose of asking the user for the amount of numbers he wants in an array and then the numbers they want. The program will display them in normal and reverse order.
 *
 * Author: Angel Olvera
 * October 13, 2018
 * Mail: angelolvera00@gmail.com
 */
#include <stdio.h>
#define MAX_SIZE 10000 // Defines how long the array can be

int main()
{
    int array[MAX_SIZE];
    int i;
    int n;


    printf("Enter size of array: ");// I aks the user for the amount of numbers he wants to input, if he enters anything other than numbers, the program will run, but nothing will be shown.
    scanf("%d", &n);

    printf("Enter %d elements in the array : ", n);//The user is asked to enter the numbers that they want.
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nElements in array are: ");//The array is printed
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nArray backwards is: ");//The array is printed in reverse order.
    for(i=n; i>=0; i--);{
        for(i=n; i>0; i--){
        printf("%d ", array[i-1]);
    }
    }
    return 0;
}