#include <stdio.h>

int main()
{
    float first_element = 9.0, second_element = 6.5, third_element = 10.4;

    float sum = first_element + second_element;
    float prod = second_element * third_element;
    float diff = first_element - second_element;

    int array[5] = {1, 2, 3, 4, 5};
    int load = array[0];
    array[4] = diff;

    for (int i = 0; i < 5; i++)
    {
        array[i] *= i;
    }

    if (sum > prod)
    {
        third_element = sum - prod;
        printf("New third element is: %f\n" , third_element);

    }
    else
    {
        second_element = sum + prod;
        printf("New second element is: %f\n" , second_element);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d. Element: %d\n", i+1, array[i]);
    }
    return 0;
}