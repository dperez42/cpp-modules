#include "../includes/Phonebook.hpp"

static int ft_search(Contact list[8], bool b);

static int	ft_full_phonebook(Contact list[8])
{
    std::string rep;

	std::cout << "The contact list is full.\n";
    ft_search(list, false);
    std::cout << "Choose index to sustitute or press \"enter\" to exit.\n";
	std::getline(std::cin, rep);
    int index = atoi(rep.c_str());
	if (!rep.compare(""))
    {
        std::cout << "Okay ! return to the main menu." << std::endl;
        return (0);
    } 
    else if (index >= 0 && index < 8 && rep.length() == 1)
    {
        list[index].add_contact();
        return (0);
    }
    std::cout << "This entry has no meaning, return to the main menu." << std::endl; 
    return (1);
}

static int ft_add(Contact list[8])
{
    int j = 0;
    while (!list[j].empty() && j < 8)
        j++;
    if (j == 8)
        return (ft_full_phonebook(list));
    list[j].add_contact();
    
    return (0);
}

static std::string ft_print_by_index(Contact list[8], int contact_amount)
{
    std::string entry;
    std::cout << "Choose an index between 0 to " << contact_amount - 1 << " : ";
    std::getline(std::cin, entry);
    if (!entry.compare(""))
        return ("NONE");
    if (entry.length() != 1)
        return (entry);
    int index = atoi(entry.c_str());
    if (entry[0] < 48 || entry[0] > 56 || list[index].empty())
        return (entry);
    list[index].print_contact();
    return ("NONE");
}

static int ft_search(Contact list[8], bool b)
{
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    std::cout << "-------------------------------------------" << std::endl;
    int j = 0;
    while (!list[j].empty() && j < 8)
    {
        std::cout << "         " << j << "|";
        list[j].print_names();
        j++;
    }
    
    if (j > 0 && b) 
    {
        while (1){
            std::string entry;
            entry = ft_print_by_index(list, j);
            if (entry.compare("NONE"))
                std::cout << "Index: " << entry << " no exist. Try another or press \"ENTER\" to exit." << std::endl;
            else {
                return(0);
            }
        }
    }
    return (0);
}

static int ft_menu(Contact list[8])
{
    std::string entry;
	std::cout << "Command? > ";
	std::getline(std::cin, entry);
	if (std::cin.eof()){
		return (1);
    }
	if (!entry.compare("ADD")){
		std::cout << "your command: " <<  entry << std::endl;
        ft_add(list);
        return (0);
    }
	if (!entry.compare("SEARCH")){
        std::cout << "your command: " <<  entry << std::endl;
		ft_search(list, true);
        return (0);
    }
	if (!entry.compare("EXIT")){
        std::cout << "your command: " <<  entry << std::endl;
		return (1);   
    }
    std::cout << "Not valid command: " <<  entry << ", use: ADD, SEARCH or EXIT." << std::endl;
	return (0);
}

int main()
{
    int command;
    Contact list[8];
    
    command = 0;
    list[0].print_title();
    while (command == 0)
            command = ft_menu(list);
    std::cout << "Bye bye !" << std::endl;
    return (0);
}