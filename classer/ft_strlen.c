/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoko <kyoko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:37:07 by mchampag          #+#    #+#             */
/*   Updated: 2021/05/11 15:45:47 by kyoko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlen()
** 		Calculer la longueur d'une chaîne de caractères
** 		i.e. calcule  la  longueur  de  la chaîne de caractères s,
** 		sans compter l'octet nul (« \0 ») final.
** VALEUR RENVOYÉE
** 		Renvoie le nombre de octets dans la chaîne s
** CONFORMITÉ
** 		SVr4, BSD 4.3, C89, C99.
** PROBLÈMES
** 	Aucun
*/

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return(i);
}

/*
** size_str     strlen(const char *s)
** size_t i;
*/