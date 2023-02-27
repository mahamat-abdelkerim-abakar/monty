#include "monty.h"
/**
*pint - print the data at the top
*@stack: double pointer th the head
*@line_number: number of lines
*Return: nothing
*/
void pint(stack_t **stack, unsigned int __attribute__((unused)) line_number)
{
if (stack == NULL || *stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
