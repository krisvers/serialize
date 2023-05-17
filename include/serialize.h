#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <stdint.h>
#include <stddef.h>

typedef unsigned char byte;

typedef struct {
	size_t size;
	byte * data;
} serialized_t;

serialized_t serialize_structure(void * ptr, size_t size);

#endif
