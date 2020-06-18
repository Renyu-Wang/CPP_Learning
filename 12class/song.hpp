//class name{};
/*
    There are two types of class members:   
        Attributes, also known as member data, 
            consist of information about an instance of the class.
        Methods, also known as member functions, 
            are functions that you can use with an instance of the class. 
            We use a . before method names to distinguish them from regular functions.
*/
#include <string>

class Song{ 

    std::string title;
    std::string artist;

    public:
        //void add_title(std::string new_title);
        std::string get_title();
        //void add_artist(std::string new_artist);
        std::string get_artist();

        //constructor
        Song(std::string new_title, std::string new_artist);

        //destructor 
         ~Song();

    private:

};