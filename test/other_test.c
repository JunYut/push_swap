# include "test.h"

void	FT_SPLIT_TEST()
{
	console_log("FT_SPLIT_TEST");
	console_log("TEST1:");
	console_log("__________________________________________");

	char *str = "1 20 300 4000 50000 600000 7000000";
	char **words = ft_split(str, ' ');
	int i = -1;
	while (words[++i] != NULL)
		console_log("%s", words[i]);
	free_strs(&words);

	console_log("TEST2:");
	console_log("__________________________________________");
	str = " hello";
	words = ft_split(str, ' ');
	for (int i = 0; i < 1; i++)
		console_log("%s", words[i]);
	free_strs(&words);

	console_log("TEST2:");
	console_log("__________________________________________");
	str = "hello ";
	words = ft_split(str, ' ');
	for (int i = 0; i < 1; i++)
		console_log("%s", words[i]);
	free_strs(&words);

	console_log("TEST3:");
	console_log("__________________________________________");
	str = " 1 2  3   4    5     6      7       8        9         10 ";
	words = ft_split(str, ' ');
	for (int i = 0; i < 10; i++)
		console_log("%s", words[i]);
	free_strs(&words);
}
