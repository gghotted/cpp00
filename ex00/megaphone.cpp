/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gypark <gypark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:40:14 by gypark            #+#    #+#             */
/*   Updated: 2021/05/03 13:17:23 by gypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*touppers(char *s)
{
	size_t	len = strlen(s);

	for (int i=0; i < len; i++)
		s[i] = toupper(s[i]);
	return (s);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i=1; i < argc; i++)
		std::cout << touppers(argv[i]);
	std::cout << std::endl;
	return (0);
}
