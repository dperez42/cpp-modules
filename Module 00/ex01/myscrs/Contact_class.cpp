#include "../includes/Phonebook.hpp"

// Constructor.
Contact::Contact():	_is_empty(true)
{}

// Destructor:
Contact::~Contact() {}

// SET=============================================================

void	Contact::setFirstName(const std::string &first_name)
{ this->_first_name = first_name; }

void	Contact::setLastName(const std::string &last_name)
{ this->_last_name = last_name; }

void	Contact::setNickname(const std::string &nickname)
{ this->_nickname = nickname; }

void	Contact::setLogin(const std::string &login)
{ this->_login = login; }

void	Contact::setPostalAddress(const std::string &postal_address)
{ this->_postal_address = postal_address; }

void	Contact::setEmailAddress(const std::string &email_address)
{ this->_email_address = email_address; }

void	Contact::setPhoneNumber(const std::string &phone_number)
{ this->_phone_number = phone_number; }

void	Contact::setBirthdayDate(const std::string &birthday_date)
{ this->_birthday_date = birthday_date; }

void    Contact::setFavoriteMeal(const std::string &favorite_meal)
{ this->_favorite_meal = favorite_meal; }

void    Contact::setUnderwearColor(const std::string &underwear_color)
{ this->_underwear_color = underwear_color; }

void    Contact::setDarkestSecret(const std::string &darkest_secret)
{ this->_darkest_secret = darkest_secret; }

// GET=============================================================
const std::string    &Contact::getFirstName()
{ return (this->_first_name); }

const std::string    &Contact::getLastName()
{ return (this->_last_name); }

const std::string    &Contact::getNickname()
{ return (this->_nickname); }

const std::string    &Contact::getLogin()
{ return (this->_login); }

const std::string    &Contact::getPostalAddress()
{ return (this->_postal_address); }

const std::string    &Contact::getEmailAdress()
{ return (this->_email_address); }

const std::string    &Contact::getPhoneNumber()
{ return (this->_phone_number); }

const std::string    &Contact::getBirthdayDate()
{ return (this->_birthday_date); }

const std::string    &Contact::getFavoriteMeal()
{ return (this->_favorite_meal); }

const std::string    &Contact::getUnderwearColor()
{ return (this->_underwear_color); }

const std::string    &Contact::getDarkestSecret()
{ return (this->_darkest_secret); }

// FUNCTIONS =============================================================================

void	Contact::add_contact()
{
	std::string infos_name[11] = {
		"first name",
		"last name",
		"nickname",
		"login",
		"postal address",
		"email address",
		"phone number",
		"birthday date",
		"favorite meal",
		"underwear color",
		"darkest secret"
	};

	std::string entry;
	for (int i = 0; i < 11; i++)
	{
		std::cout << infos_name[i] << " : ";
		std::getline(std::cin, entry);
		(i == 0) ? this->setFirstName(entry) : (void)0;
		(i == 1) ? this->setLastName(entry) : (void)0;
		(i == 2) ? this->setNickname(entry) : (void)0;
		(i == 3) ? this->setLogin(entry) : (void)0;
		(i == 4) ? this->setPostalAddress(entry) : (void)0;
		(i == 5) ? this->setEmailAddress(entry) : (void)0;
		(i == 6) ? this->setPhoneNumber(entry) : (void)0;
		(i == 7) ? this->setBirthdayDate(entry) : (void)0;
		(i == 8) ? this->setFavoriteMeal(entry) : (void)0;
		(i == 9) ? this->setUnderwearColor(entry) : (void)0;
		(i == 10) ? this->setDarkestSecret(entry) : (void)0;
	}
	this->_is_empty = false;
}

void	Contact::print_title(){
	std::cout << std::endl;
	std::cout << "██████ ██   ██  ██████  ███    ██ ███████ ██████   ██████   ██████  ██   ██ " << std::endl;
	std::cout << "██  ██ ██   ██ ██    ██ ████   ██ ██      ██   ██ ██    ██ ██    ██ ██  ██  " << std::endl;
	std::cout << "██████ ███████ ██    ██ ██ ██  ██ █████   ██████  ██    ██ ██    ██ █████   " << std::endl;
	std::cout << "██     ██   ██ ██    ██ ██  ██ ██ ██      ██   ██ ██    ██ ██    ██ ██  ██  " << std::endl;
	std::cout << "██     ██   ██  ██████  ██   ████ ███████ ██████   ██████   ██████  ██   ██ " << std::endl;
	std::cout << std::endl;
	std::cout << "Welcome to your phonebook !\nThe available commands are : " << std::endl;
	std::cout << " - ADD \n - SEARCH \n - EXIT \n" << std::endl;
}

void	Contact::print_names(){
	    Contact::_ft_format(this->_first_name);
        std::cout << "|";
        Contact::_ft_format(this->_last_name);
        std::cout << "|";
        Contact::_ft_format(this->_nickname);
        std::cout << std::endl;
}

void	Contact::print_contact()
{
	std::cout << "first name      : " << this->getFirstName() << std::endl;
	std::cout << "last name       : " << this->getLastName() << std::endl;
	std::cout << "nickname        : " << this->getNickname() << std::endl;
	std::cout << "login           : " << this->getLogin() << std::endl;
	std::cout << "postal address  : " << this->getPostalAddress() << std::endl;
	std::cout << "email address   : " << this->getEmailAdress() << std::endl;
	std::cout << "phone number    : " << this->getPhoneNumber() << std::endl;
	std::cout << "birthday date   : " << this->getBirthdayDate() << std::endl;
	std::cout << "favorite meal   : " << this->getFavoriteMeal() << std::endl;
	std::cout << "underwear color : " << this->getUnderwearColor() << std::endl;
	std::cout << "darkest secret  : " << this->getDarkestSecret() << std::endl;
}

bool	Contact::empty()
{ return (this->_is_empty); }

void Contact::_ft_format(std::string s)
{
    if (s.size() > 10)
    {
        s = s.insert(9, ".");
        s = s.substr(0, 10);
    }
    else
        while (s.length() < 10)
            s = s.insert(0, " ");
    std::cout << s;
}



