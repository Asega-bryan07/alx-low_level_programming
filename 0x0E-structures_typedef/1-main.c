#include <stdio.h>
#include "dog.h"

/**
* main - check codes from Holberton school
* Return: 0, Success
*/
int main(void)
{
struct dog my_dog;

init_dog(&my_dog, "Django", 3.5, "Jay");
printf("my name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
