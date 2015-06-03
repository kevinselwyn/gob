#include <unistd.h>

int main() {
	char buffer[1];

	write(1, "Gob's Program:  Y/N?\n? ", 23);
	read(0, buffer, 1);

	if (buffer[0] != 'Y' && buffer[0] != 'y') {
		goto end;
	}

	while (1) {
		write(1, "PENUS ", 6);
		usleep(25000);
	}

end:
	return 0;
}