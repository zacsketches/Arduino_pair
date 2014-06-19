#ifndef PAIR_H
#define PAIR_H JUN_2014

/* Lightweight implementation of STL Pair<> */

template<class M, class N>
struct Pair {
    M val_1;
    N val_2;
    
    Pair(M v1, N v2) 
      :val_1(v1), val_2(v2) {}
    
    //use default values for copy construction and assignment
    
    M first() { return val_1; }
    N second() { return val_2; }
};

#endif