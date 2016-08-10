// Last Update:2016-08-10 10:45:41
/**
 * @file read_person.cpp
 * @brief 
 * @author jchsong@mail.ustc.edu.constexpr
 * @version 0.1.00
 * @date 2016-08-10
 */
#include <iostream>
#include <fstream>
#include <string>

#include "../proto/person.pb.h"

#define BUFSIZE 1024

int main()
{
    Person *person = new Person;
    char buffer[BUFSIZE];
    std::fstream input("myfile", std::ios::in|std::ios::binary);
    input.read(buffer, sizeof(Person));

    person->ParseFromString(buffer);

    std::cout << "name : " << person->name() << std::endl
        << "phoneNum : " << person->phonenum(0) << std::endl;
        
    return 0;
}

