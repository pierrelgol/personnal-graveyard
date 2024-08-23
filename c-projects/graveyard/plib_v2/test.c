#include "plib.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_file *file;
	t_reader *reader;
	t_writer *writer;
	char	*buffer;
	int	fd;

	buffer = (char [16384]){0};
	// if (argc >= 2)
	// {
	// 	file = plib_stream_file_create(argv[1], O_RDWR, buffer, 4096);
	// 	if (!file)
	// 		return (1);
	// 	reader = plib_stream_file_get_reader(file);
	// 	writer = plib_stream_file_get_writer(file);

	// 	plib_stream_reader_read(reader);
	// 	writer->_writer.handle = STDOUT_FILENO;
	// 	plib_stream_writer_write(writer);
	// 	plib_stream_file_destroy(file);
	// }

	// buffer = (char [1]){0};
	file = plib_stream_file_create_from_fd(STDIN_FILENO, O_RDWR, buffer, 16384);
	if (!file)
		return (1);
	reader = plib_stream_file_get_reader(file);
	writer = plib_stream_file_get_writer(file);

	writer->_writer.handle = STDOUT_FILENO;
	while (plib_stream_reader_read(reader))
	{
		plib_stream_writer_write(writer);
	}
	plib_stream_file_destroy(file);
	return (0);
}
