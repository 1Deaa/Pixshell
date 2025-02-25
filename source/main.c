/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:01:46 by drahwanj          #+#    #+#             */
/*   Updated: 2025/02/25 23:21:53 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

extern int	g_status;

static void	pix_getppid(t_prompt *prompt)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
	{
		//stuff
		exit(EXIT_FAILURE);
	}
	if (!pid)
	{
		//stuff
		exit(EXIT_FAILURE);
	}
	waitpid(pid, NULL, 0);
	prompt->pid = pid - 1;
}

static t_prompt	init_prompt(char **argv, char **envp)
{
	t_prompt	prompt;
	char		*str;

	str = NULL;
	prompt.cmds = NULL;
	prompt.envp = NULL; //TODO: duplicate
	g_status = 0;
	pix_getppid(&prompt); /* Parent Process ID*/
	/*TODO: init vars*/
	return (prompt);
}

int	main(int argc, char **argv, char **envp)
{
	t_prompt	prompt;
	char		*input;
	char		*str;

	prompt = init_prompt(argv, envp);
	while (argc && argv)
	{
		signal(SIGINT, NULL); //TODO: SIGINT handler
		signal(SIGQUIT, SIG_IGN);
		str = getprompt(prompt);
		if (str)
		{
			input = readline(str);
		}
		else
		{
			input = readline("PIXSHELL $ ");
		}
		free(str);
	}
	exit(g_status);
}