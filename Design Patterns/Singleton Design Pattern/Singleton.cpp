/*
  Program to implement Singleton design pattern

  Singleton is a creational design pattern that lets you ensure that a class has only one instance,
  while providing a global access point to this instance.

  The Singleton class defines the 'GetInstance' method that serves as an alternative
  to constructor and lets clients access the same instance of this class over and over.
  
  Why would anyone want to control how many instances a class has? 
  The most common reason for this is to control access to some shared resource—for example, a database or a file.
*/

#include <iostream>
#include "Singleton.h"

/*
Static members must be declared inside the class and defined outside the class
since static members are not part of object.
*/
Singleton* Singleton::m_instance(nullptr);

Singleton::Singleton(const std::string valueArg) : m_value(valueArg) {
}

Singleton::~Singleton() {
}

std::string Singleton::getValue() const {
  return m_value;
}

Singleton* Singleton::getInstance(const std::string& value) {
  if (m_instance == nullptr) {
    m_instance = new Singleton(value);
  }
  return m_instance;
}
