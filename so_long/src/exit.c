/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:58:34 by hyolasig          #+#    #+#             */
/*   Updated: 2023/01/07 16:30:18 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_msg(char *msg)
{
	ft_printf("%s", msg);
	exit(0);
}

int	mouse_hook(int mousecode, t_data *data)
{
	err_msg("Exit Success");
	return (0);
}

void	exit_door(t_data *data)
{
	if (data->coin_collected == data->coin_count)
		err_msg("FINISH");
	else
		ft_printf("Sorry, you can't exit.\n");
}
