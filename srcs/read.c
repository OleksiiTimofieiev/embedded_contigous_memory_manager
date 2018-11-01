#include "../includes/mcu.h"

bool	read_one_block(t_memory *memory) /* read the memory sector */
{
	if (memory->blocks_total)
	{
		int i = 0;

		while (i < BLOCK_SIZE)
			printf("%c", memory->read_address[i++]);
		printf("\n");
		memory->blocks_total -= 1;
		memory->read_address += BLOCK_SIZE;
		return (true);
	}
	else
	{
		printf("%s\n", "no available block");
		return (false);
	}
}