#include "hash_tables.h"

/**
 * hash_table_delete - delete a ht
 * @ht: pointer to the ht
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int ind;
	hash_node_t *tmp1;
	hash_node_t *tmp2;

	if (ht == NULL)
		return;

	for (ind = 0; ind < ht->size; ind++)
	{
		tmp1 = ht->array[ind];
		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2->key);
			free(tmp2->value);
			free(tmp2);
		}
	}
	free(ht->array);
	free(ht);
}
