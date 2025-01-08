#ifndef SORT_H
# define SORT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>

/*-- Sorts --*/
void	radix_sort(int *arr, int size);

/*-- Utils --*/
int		find_max_num(int *arr, int size);
void	printArray(int *arr, int n);

#endif
