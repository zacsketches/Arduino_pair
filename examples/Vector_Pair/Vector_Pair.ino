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
  
  Serial.println("Same test at Pair.ino with a few vector uses at the end");
  
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
  
  Vector<Pair<int, int> > range_bearing_vec;
  typedef Pair<int, int> measurement;
  measurement m1(83, 124);
  measurement m2(23, 89);
  measurement m3(78, 190);
  range_bearing_vec.push_back(m1);
  range_bearing_vec.push_back(m2);
  range_bearing_vec.push_back(m3);
  
  Serial.println();
  Serial.println("Let's have a look at the vector elements");
  for(int i=0; i<range_bearing_vec.size(); ++i){
      print(range_bearing_vec[i]);
  }
  
  
}

void loop() {
  delay(10);  
}