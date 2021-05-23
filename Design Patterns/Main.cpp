#include <iostream>
#include "Singleton.h"
#include "Subject.h"
#include "Observer.h"

int main()
{
  std::cout << "Here goes the Singleton pattern" << std::endl;
  /* Instatiate Singleton class*/
  Singleton* singleton = Singleton::getInstance("Maneesha");
  std::cout << singleton->getValue() << std::endl;

  std::cout << "\nHere comes the Observer pattern" << std::endl;
  /* Instatiate Subject and Observer class*/
  Subject* subject = new Subject();
  Observer* observer1 = new Observer(*subject);
  Observer* observer2 = new Observer(*subject);
  Observer* observer3 = new Observer(*subject);
  Observer* observer4;
  Observer* observer5;

  subject->createNewMessage("Hello Maneesha !!");
  observer3->removeMeFromList();

  subject->createNewMessage("Hello Manoj !!");
  observer4 = new Observer(*subject);

  subject->createNewMessage("Hello World !!");
  observer5 = new Observer(*subject);

  observer1->removeMeFromList();
  observer4->removeMeFromList();

  delete observer5;
  delete observer4;
  delete observer3;
  delete observer2;
  delete observer1;
  delete subject;
}