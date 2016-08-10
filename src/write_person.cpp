// Last Update:2016-08-10 10:19:29
/**
 * @file write_person.cpp
 * @brief 
 * @author jchsong@mail.ustc.edu.constexpr
 * @version 0.1.00
 * @date 2016-08-10
 */
#include <iostream>
#include <fstream>
#include <string>

#include "../proto/person.pb.h"

int main()
{
    std::string buffer;
    Person person;
    person.set_name("jasensong");
    person.set_age(28);
    person.set_email("jasensong@tencent.com");
    person.add_phonenum("abc");
    person.add_phonenum("def");
    std::fstream output("myfile", std::ios::out|std::ios::binary);
    person.SerializeToString(&buffer);
    output.write(buffer.c_str(), buffer.size());
    return 0;
}

