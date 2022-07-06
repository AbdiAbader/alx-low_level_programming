#include "3-calc.h"
#include "function_pointers.h"
/**
 *op_add - adds two numbers
 *@a: number one
 *@b: number two
 *Return: return sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 *op_sub - Substraction two numbers
 *@a: number one
 *@b: number two
 *Return: return sum
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - Multiply two numbers
 *@a: number one
 *@b: number two
 *Return: return sum
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 *op_div - divide two numbers
 *@a: number one
 *@b: number two
 *Return: return sum
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 *op_mod - modulo two numbers
 *@a: number one
 *@b: number two
 *Return: return sum
 */
int op_mod(int a, int b)
{
return (a % b);
}
