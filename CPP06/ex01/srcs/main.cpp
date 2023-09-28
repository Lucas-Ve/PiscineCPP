# include "../includes/Serializer.hpp"

# define RED  "\033[0;31m"
# define GREEN			"\e[92;5;118m"
# define RESET			"\e[0m"
int main (void)
{
    Data data;
    Serializer se;
    data.test1 = "Hello la team c'est tibo inshape";
    data.test2 = 42;
    data.test3 = 42.427575;

    uintptr_t serializer = se.serialize(&data);
    Data *deserializer = se.deserialize(serializer);

    if (deserializer == &data)
        std::cout << GREEN << "Serializer a success" << RESET << std::endl;
    else
        std::cout << RED << "Failed" << RESET << std::endl;

    std::cout << "Original Data: " << data << std::endl;
    std::cout << "serializer Data: " << serializer << std::endl;
    std::cout << "Deserialized Data: " << *deserializer << std::endl;

    return 0;
}