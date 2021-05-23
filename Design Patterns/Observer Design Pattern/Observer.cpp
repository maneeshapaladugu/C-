/*
  Program to implement Observer design pattern

  Observer is a behavioral desing pattern, let's you define a subscription mechanism
  to notify multiple objects about any events that happen to the object they're observing.

  Subject is also called the Publisher and Observer is often called the Subscriber and vice versa.
*/

#include <iostream>
#include <list>
#include <string>
#include "Observer.h"

int Observer::staticID(0);

Observer::Observer(Subject& subjectObj) : subject(subjectObj) {
    subject.attach(this);
    std::cout << "\nHi !! I'm the observer \"" << ++Observer::staticID << "\"" << std::endl;
    id = Observer::staticID;
}

Observer::~Observer() {
    std::cout << "\nGoodbye, I was the observer \"" << id << "\"";
}

void Observer::update(const std::string& message_from_subject) {
    messageFromSubject = message_from_subject;
    printInformation();
}

void Observer::removeMeFromList() {
    subject.detach(this);
    std::cout << "Observer \"" << id << "\" removed from the list " << std::endl;
}

void Observer::printInformation() {
    std::cout << "Observer \"" << id << "\": a new message is available - " << messageFromSubject << std::endl;
}