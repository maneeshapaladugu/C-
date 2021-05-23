#include <iostream>
#include "iObserver.h"

class iSubject {
public:
  virtual ~iSubject() {};
  virtual void attach(iObserver* observerObj) = 0;
  virtual void detach(iObserver* observerObj) = 0;
  virtual void notify() = 0;
};