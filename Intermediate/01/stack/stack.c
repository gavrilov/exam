/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:32:16 by exam              #+#    #+#             */
/*   Updated: 2020/01/23 14:49:24 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct s_node {
	void          *content;
	struct s_node *next;
};

struct s_stack {
	struct s_node *top;
};

struct s_stack *init(void)
{
	struct s_stack *stack;
	stack = (struct s_stack *)malloc(sizeof(struct s_stack));
	stack->top = NULL;
	return (stack);
}

void *pop(struct s_stack *stack)
{
	void *data;
	struct s_node *node;

	if (stack == NULL || stack->top == NULL)
		return (NULL);
	node = stack->top;
	data = node->content;
	stack->top = node->next;
	free(node);
	return (data);
}

void push(struct s_stack *stack, void *content)
{
	struct s_node *new;

	if (stack == NULL)
		return ;

	new = (struct s_node *)malloc(sizeof(struct s_node));
	new->content = content;
	new->next = stack->top;
	stack->top = new;
}

void *peek(struct s_stack *stack)
{
	if (stack == NULL || stack->top == NULL)
		return (NULL);
	return (stack->top->content);
}

int isEmpty(struct s_stack *stack)
{
	if (stack == NULL || stack->top == NULL)
		return (1);
	return (0);
}
