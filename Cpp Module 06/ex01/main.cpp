#include "Serializer.hpp"

int main()
{
    Data mydata;
    mydata.value = 42;
    uintptr_t serializedData = Serializer::serialize(&mydata);

    Data* deserializedData = Serializer::deserialize(serializedData);
    if (deserializedData == &mydata) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Original value: " << mydata.value << ", Deserialized value: " << deserializedData->value << std::endl;
    } else {
        std::cout << "Error in serialization/deserialization." << std::endl;
    }

    return 0;
}