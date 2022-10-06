#include "monty.h"

/**
  * push - Adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @param: The value to adds on the stack
  *
  * Return: Nothing
  */
void push(stack_t **stack, unsigned int param)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
        exit(1);
    
    new_node->n = param;
    if (*stack)
    {
        new_node->next = *stack;
        new_node->prev = (*stack)->prev;
        (*stack)->prev = new_node;
        *stack = new_node;
        return (*stack);
    }
}

/**
  * push - Adds a new node at the beginning of the stack
  * @stack: The head of the stack
  * @param: The value to adds on the stack
  *
  * Return: Nothing
  */
void enqueue(stack_t **stack, unsigned int param)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
        exit(1);

    new_node->n = param;
    if(*stack)
    {
        new_node->prev = *stack;
        new_node->next = (*stack)->next;
        (*stack)->next = new_node;
        *stack = new_node;
        return (*stack);
    }
}
