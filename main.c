#include <stdio.h>
#include <serialize.h>

typedef struct {
	int data;
	char str[5] ;
} __attribute__((packed)) test_t;

int main(void) {
	test_t s;
	serialized_t serial_s;
	/*deserialized_t deserial_s;*/

	s.data = 69420;
	s.str[0] = 't';
	s.str[1] = 'e';
	s.str[2] = 's';
	s.str[3] = 't';
	s.str[4] = '\0';

	serial_s = serialize_structure(&s, sizeof(s));

	while (serial_s.size--) {
		printf("%c", serial_s.data[serial_s.size]);
	}


	return 0;
}
