#include <unistd.h>

void ft_print_alphabet(void)
{
    char    h;
    h = "a";
    while   (h<="z"){
        write(1, &h, 1);
        h = h +1;
    }
}
/*
int	main(void){

	ft_print_alphabet();
	return(0);
}*/
