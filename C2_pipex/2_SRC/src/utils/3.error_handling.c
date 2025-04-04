/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3.error_handling.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:14:51 by dinepomu          #+#    #+#             */
/*   Updated: 2025/03/10 10:07:37 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* https://linktr.ee/diegonmarcos											  */
/* ************************************************************************** */

#include "pipex.h"

void	error_handling_pipex(int argc)
{
	if (argc != 5)
		halt_exit_fd(1);
}
