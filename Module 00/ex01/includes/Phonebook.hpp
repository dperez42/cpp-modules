#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// LIBS
# include <iostream>

// PROTOTYPES
class Contact;

// CLASS DEFINITIONS
class Contact
{
    public:
        // Coplien
        Contact();
        //Contact(const Contact&);
        ~Contact();
        Contact &operator=(const Contact& op);

        //Set
        void    setFirstName(const std::string &first_name);
        void    setLastName(const std::string &last_name);
        void    setNickname(const std::string &nickname);
        void    setLogin(const std::string &login);
        void    setPostalAddress(const std::string &postal_address);
        void    setEmailAddress(const std::string &email_address);
        void    setPhoneNumber(const std::string &phone_number);
        void    setBirthdayDate(const std::string &birthday_date);
        void    setFavoriteMeal(const std::string &favorite_meal);
        void    setUnderwearColor(const std::string &underwear_color);
        void    setDarkestSecret(const std::string &darkest_secret);
        //Get
        const std::string    &getFirstName();
        const std::string    &getLastName();
        const std::string    &getNickname();
        const std::string    &getLogin();
        const std::string    &getPostalAddress();
        const std::string    &getEmailAdress();
        const std::string    &getPhoneNumber();
        const std::string    &getBirthdayDate();
        const std::string    &getFavoriteMeal();
        const std::string    &getUnderwearColor();
        const std::string    &getDarkestSecret();

        // Additionnal
        void    add_contact();
        void    print_contact();
        bool    empty();

        // Exceptions
    
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _login;
        std::string _postal_address;
        std::string _email_address;
        std::string _phone_number;
        std::string _birthday_date;
        std::string _favorite_meal;
        std::string _underwear_color;
        std::string _darkest_secret;
        bool        _is_empty;
};
#endif
