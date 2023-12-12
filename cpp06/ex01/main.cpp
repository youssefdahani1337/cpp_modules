

#include "Serializer.hpp"

int main()
{

    Data d("John", 42);
    uintptr_t raw = Serializer::serialize(&d);
    Data *ptr = Serializer::deserialize(raw);

    std::cout << ptr->name << std::endl;
    std::cout << ptr->age << std::endl;

    return 0;
}