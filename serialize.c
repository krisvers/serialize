#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <serialize.h>

serialized_t serialize_structure(void * ptr, size_t size) {
	serialized_t s;
	void * p = ptr;

	s.size = size;
	s.data = malloc(size);

	for (; size--;) {
		s.data[((uintptr_t) p) - ((uintptr_t) ptr)] = *((byte *) p);
		p = (void *) (((uintptr_t) p) + 1);
	}

	return s;
}
