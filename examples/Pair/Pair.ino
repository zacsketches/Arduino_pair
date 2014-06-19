#include <Vector.h>
#include <Pair.h>

template<class M, class N>
void print(const Pair<M, N>& pair ){
    M t1 = pair.val_1;
    N t2 = pair.val_2;
    
    Serial.print(t1);
    Serial.print(":");
    Serial.println(t2);
}

void setup() {
  Serial.begin(57600);
  
  Serial.println();
  
  Pair<int, int> p1(5, 3);
  Pair<char*, int> p2("test", 5);
  Pair<char*, int> p3("test1", 6);
  
  Serial.print("p1 is: ");
  print(p1);
  Serial.print("p2 is: ");
  print(p2);
  Serial.print("p3 is: ");
  print(p3);
  
  p3 = p2;
  
  Serial.print("p3 after assigning p3 = p2: ");
  print(p3);
  
  Pair<char*, int> p4(p3);
  Serial.print("p4 copy constructed from p3: ");
  print(p4);
  
  Vector< Pair< char*, int> > v_pair;
  v_pair.push_back(p2);
  
  typedef Pair<char*, char*> char_pair;
  char_pair p5("test", "again");
}

void loop() {
  delay(10);  
}