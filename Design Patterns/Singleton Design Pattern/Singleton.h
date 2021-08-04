#ifndef Singleton_H
#define Singleton_H

class Singleton {
  /*
    The Singleton's constructor should always be private to prevent direct
    construction calls with the 'new' operator or during object creation.
  */
private:

  static Singleton* m_instance;

  std::string m_value;

  Singleton(const std::string valueArg);//Constructor

public:

  ~Singleton();//Destructor

  /*
    This is the static method that controls the access to singleton instance. On the first run,
    it creates a singleton object and places it into the static field. On subsequent runs,
    it returns the client existing object stored in the static field.
  */

  static Singleton* getInstance(const std::string& value);

  std::string getValue() const;
};
#endif
