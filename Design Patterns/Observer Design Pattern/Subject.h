#ifndef Subject_H
#define Subject_H

#include "iSubject.h"
#include <list>

class Subject : public iSubject {

private:

  std::list<iObserver*> observerList;

  std::string message;

public:

  Subject();

  virtual ~Subject();

  /*
    The subscription management methods:
  */

  void attach(iObserver* observerObj);

  void detach(iObserver* observerObj);

  void notify();

  void createNewMessage(std::string newMessage = "Empty");

  void displayObserversCount();
};
#endif