#ifndef SORT_H
# define SORT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>

/*-- Sorts --*/
void	radix_sort(int *arr, int size);
void	counting_sort(int *arr, int size, int exp);

/*-- Utils --*/
int		find_max_num(int *arr, int size);
void	print_array(int *arr, int n);

#endif
