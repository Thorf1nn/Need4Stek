/*
** EPITECH PROJECT, 2021
** B-AIA-200-MPL-2-1-n4s-luca.orelli
** File description:
** main.c
*/

#include "../include/my.h"

char **pars_tab(char *line)
{
    return split_string(line, ':');
}

void algo(char *line)
{
    char **tab = pars_tab(line);
    double right;
    double left;
    char *test_line = NULL;
    size_t len = 0;

    for (int i = 4; tab[i]; i++) {
        left = atof(tab[4]);
        right = atof(tab[34]);
        if (left > right && left > 450) {
            write(1, "CAR_FORWARD:0.1\n", strlen("CAR_FORWARD:0.1\n"));
            getline(&test_line, &len, stdin);
            write(1, "WHEELS_DIR:0.3\n", strlen("WHEELS_DIR:0.3\n"));
            getline(&test_line, &len, stdin);
            break;
        }
        if (left < right && left < 450) {
            write(1, "CAR_FORWARD:0.1\n", strlen("CAR_FORWARD:0.1\n"));
            getline(&test_line, &len, stdin);
            write(1, "WHEELS_DIR:-0.3\n", strlen("WHEELS_DIR:-0.3\n"));
            getline(&test_line, &len, stdin);
            break;
        }
    }
}

int main(void)
{
    char *line = NULL;
    size_t len = 0;

    write(1, "START_SIMULATION\n", strlen("START_SIMULATION\n"));
    while (1) {
        write(1, "GET_INFO_LIDAR\n", strlen("GET_INFO_LIDAR\n"));
        getline(&line, &len, stdin);
        algo(line);
    }
    return 0;
}
