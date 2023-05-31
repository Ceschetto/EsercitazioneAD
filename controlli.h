#ifndef CONTROLLI_H_INCLUDED
#define CONTROLLI_H_INCLUDED
#include <stdbool.h>
bool is_int(char * buffer_input, size_t buffer_size);
bool is_out_of_range(size_t min, size_t max, int value);
#endif // CONTROLLI_H_INCLUDED
