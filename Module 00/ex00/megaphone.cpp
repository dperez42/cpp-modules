# include <iostream>

void ft_megaphone(char **argv){
    int i;
    int j;

    i = 0;
    while (argv[++i]){
        j = -1;
        while (argv[i][++j]){
            if (argv[i][j] > 96 && argv[i][j] < 123){
                std::cout << (char) (argv[i][j] - 32);
            }
            else {
                std::cout << argv[i][j];
            }
        }
    }
    std::cout <<"\n";
    return;
}

int main(int agvn, char **agv)
{
    if (agvn == 1){
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
    }
    ft_megaphone(agv);
    return (0);
}