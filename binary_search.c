#include "binary_search.h"
#include <stdint.h>

int32_t BinarySearch(int32_t* arr, int32_t arr_size, int32_t in_data)
{
	int32_t L, R, M;

	R = arr_size - 1;
	L = 0;

	while (L <= R)
	{
		M = (R + L) / 2;

		if (in_data == arr[M])
			return M;

		if (in_data > arr[M])//increase array > , decrease array < 
			L = M + 1;
		else
			R = M - 1;
	}
	return -1;
}

