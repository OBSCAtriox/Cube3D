#include "cube3d.h"

int	main(int argc, char *argv[])
{
	t_data	data;
	int fd;
	
	fd = 0;
	init_data(&data);
	if (argc != 2)
		exit_error(&data, "Invalid number of arguments\n", 0);
	data.file = ft_strdup(argv[1]);
	if (verify_file_extension(data.file))
		exit_error(&data, "File is Invalid\n", 0);
	verify_empty_file(&data, data.file);
	verify_onlyspaces_file(&data);
	cub_open(&data, &fd, data.file);
	if (!parse_identifiers(&data, fd))
	{
		close(fd);
		exit_error(&data, "Identifiers are incorrect\n", 0);
	}
	
	close(fd);
	execute_verifications(&data);
	// TEST
	printf("%s\n", data.textures.no);
	printf("%s\n", data.textures.so);
	printf("%s\n", data.textures.ea);
	printf("%s\n", data.textures.we);
	printf("Floor: %d,%d,%d\nCeilling: %d,%d,%d\n", data.textures.fc[0],
		data.textures.fc[1], data.textures.fc[2], data.textures.cc[0],
		data.textures.cc[1], data.textures.cc[2]);
	if_allocated_free(&data);
	return (0);
}
