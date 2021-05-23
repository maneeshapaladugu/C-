#include "Subject.h"

/*
   The Subject owns some important state and notifies observers when the state changes.
*/
Subject::Subject() {
}

Subject::~Subject() {
  std::cout << "\nGoodbye, I was a Subject" << std::endl;
}

/*
    Implementing the subscription management methods:
 */

void Subject::attach(iObserver* observerObj) {

  observerList.push_back(observerObj);
}

void Subject::detach(iObserver* observerObj) {

  observerList.remove(observerObj);
}

void Subject::notify() {

  std::list<iObserver*>::iterator iterator = observerList.begin();
  displayObserversCount();

  while (iterator != observerList.end()) {

    (*iterator)->update(message);
    ++iterator;
  }
}

void Subject::createNewMessage(std::string newMessage) {

  message = newMessage;
  notify(); //notify to all observers
}

void Subject::displayObserversCount() {

  std::cout << "\nThere are " << observerList.size() << " observers in the list" << std::endl;
}