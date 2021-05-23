#include <iostream>

class iObserver {
public:
  virtual ~iObserver() {};
  virtual void update(const std::string& message_from_subject) = 0;
};