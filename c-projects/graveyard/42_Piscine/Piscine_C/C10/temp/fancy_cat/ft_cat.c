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
#include "futils.h"

void	throw_error(void)
{
	if (errno == EACCES)
		write(STD_ERROR, MSG_EACCES, sizeof(MSG_EACCES));
	if (errno == ENOENT)
		write(STD_ERROR, MSG_ENOENT, sizeof(MSG_ENOENT));
	else
		write(STD_ERROR, MSG_MNYARG, sizeof(MSG_MNYARG));
	exit(errno);
}

int main(int argc, char **argv)
{
	t_buffer buffer;
	int i;

	buffer.content = (char [T_BUFFER_MAX_CAP]){0};
	buffer.size = 0;
	
	i = 1;
	if(argc >= 2)
	{
		while(i < argc && buffer.size < T_BUFFER_MAX_CAP)
		{
			if(t_buffer_load_file(&buffer, argv[i]) == SIG_ERROR)
				throw_error();
			++i;
		}
		if(t_buffer_write_to(STD_OUTPUT, &buffer) == SIG_ERROR)
			throw_error();
	}
	else
		throw_error();

	return (SIG_SUCCESS);
}
