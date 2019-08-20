
#include "hello.hpp"
#include <iostream>
#include <memory>
#include <fstream>
#include "Person.pb.h"

#include <vector>

typedef std::vector<uint8_t> Buffer;

using namespace std;

void hello::save() {
    std::cout << "Hello world, from say-hello version " << std::endl;
    
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    
    Person person;
    person.set_first_name("John");
    person.set_last_name("Doe");
    person.set_age(45);

    fstream output("person.bin", ios::out | ios::trunc | ios::binary);
    person.SerializeToOstream(&output);
    
}

void hello::load() {

    Person person;
    fstream input("person.bin", ios::in | ios::binary);
    
    person.ParseFromIstream(&input);
    cout << "First name: " << person.first_name() << endl;
    cout << "Last name: " << person.last_name() << endl;
    cout << "Age: " << person.age() << endl;
    google::protobuf::ShutdownProtobufLibrary();
    
}