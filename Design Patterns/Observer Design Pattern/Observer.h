#ifndef Observer_H
#define Observer_H

#include "Subject.h"

class Observer : public iObserver {

private:
  std::string messageFromSubject;
  Subject& subject;
  static int staticID;
  int id; // Holds the id of each object

public:
  Observer(Subject& subjectObj);

  virtual ~Observer();

  void update(const std::string& message_from_subject);

  void removeMeFromList();

  void printInformation();
};
#endif