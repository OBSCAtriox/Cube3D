#include "cube3d.h"

int	main(int argc, char *argv[])
{
	t_data	data;
	t_game	game;
	int		fd;

	fd = 0;
	if (argc != 2)
	{
		put_error("Invalid number of arguments");
		exit(EXIT_FAILURE);
	}
	if(!inits(&data, &game))
		exit(EXIT_FAILURE);
	data.game = &game;
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
	parse_map(&data, fd);
	close(fd);
	execute_verifications(&data);
	if (!load_components(&data, &game))
		exit(EXIT_FAILURE);
	if_allocated_free(&data);
	if(!run_game(&data, &game))
		exit(EXIT_FAILURE);
	return (0);
}
