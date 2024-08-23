/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Plgol <plgol@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:59:12 by Plgol             #+#    #+#             */
/*   Updated: 2023/07/20 16:59:13 by Plgol            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/errno.h>

#define ERR_FILE_MISSING "File name missing."
#define ERR_ARG_COUNT "Too many arguments."
#define ERR_READ_FILE "Cannot read file."




int	ft_dislplay_file(char *file_name)
{
	int 	byte_read;
	int 	file_fd;
	char 	*buffer;

	buffer  = (char [24000]){0};
	file_fd = open(file_name, O_RDONLY);
	if(file_fd < 0)
	{
		write(1, ERR_READ_FILE, sizeof(ERR_READ_FILE));
		return (0);
	}
	else
	{
		byte_read = read(file_fd, buffer, 24000);
		if(byte_read < 0)
			write(1, ERR_READ_FILE, sizeof(ERR_READ_FILE));
		else
			write(1, buffer, byte_read);
		close(file_fd);
	}
	return (1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		ft_dislplay_file((argv[1]));
	else if(argc > 2)
	{
		write(2,ERR_ARG_COUNT ,sizeof((ERR_FILE_MISSING)));
		exit(*__error());
	}
	else
	{
		write(2,ERR_FILE_MISSING ,sizeof((ERR_FILE_MISSING)));
		exit(*__error());
	}

	return (0);
}
