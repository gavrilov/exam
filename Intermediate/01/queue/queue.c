/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgavrilo <kgavrilo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:32:16 by exam              #+#    #+#             */
/*   Updated: 2020/01/23 15:10:21 by kgavrilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

struct s_node {
	void          *content;
	struct s_node *next;
};

struct s_queue {
	struct s_node *first;
	struct s_node *last;
};

struct s_queue *init(void)
{
	struct s_queue *queue;
	if (! (queue = (struct s_queue *)malloc(sizeof(struct s_queue))))
		return (NULL);
	queue->first = NULL;
	queue->last = NULL;
	return (queue);
}

void enqueue(struct s_queue *queue, void *content)
{
	struct s_node *new;

	if (queue == NULL)
		return ;
	new = (struct s_node *)malloc(sizeof(struct s_node));
	new->content = content;
	new->next = NULL;
	if (queue->first == NULL)
		queue->first = new;
	else
		queue->last->next = new;
	queue->last = new;
}

void *dequeue(struct s_queue *queue)
{
	void *result;
	struct s_node *current;

	if (queue == NULL || queue->first == NULL)
		return (NULL);
	current = queue->first;
	if (current == queue->last)
		queue->last = NULL;
	result = current->content;
	queue->first = current->next;
	free(queue);
	return (result);
}

void *peek(struct s_queue *queue)
{
	if (queue == NULL || queue->first == NULL)
		return (NULL);
	return (queue->first->content);
}

int isEmpty(struct s_queue *queue)
{
	if (queue == NULL || queue->first == NULL)
		return (1);
	return (0);
}

