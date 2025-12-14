#include <iostream>
using namespace std;

class Niedzwiedz {

  public:
  
  void make() {
    value += 10;
  } 
  
  float get() {
    return value;
  } 
  
  void set(float value) {
    this->value = value;
  } 
  
  
  private:
  float value = 0;
  

};

class Codes {

  public:
  
    unsigned short success() {
      return 0;
    } 

};

class Stan1 {

  public:
  
  void make(Stan1 poczatek, Stan1 poprzedni) {
  
  } 
  
  
  private:

};

class Stan2 {

  public:
  
  void make(Stan1 poczatek, Stan1 poprzedni) {
  } 

};

class Stan3 {

  public:
  
  void make(Stan1 poczatek, Stan2 poprzedni) {
  } 



};


int main()
{
    Niedzwiedz nied;
    Codes codes;
    
    for (int index = 0; index < 10; index++) {
    
      nied.make();
    
    } 
    
    cout << "Value: " << nied.get() << endl;
    
    nied.set(200);
    
    cout << "Value: "  << nied.get() << endl;
    
    
    return codes.success();
}

    