Arduino_pair
============

Lightweight implementation of the STL Pair&lt;class M, class N> type for use on Arduino

I use `Pair<int, int>` to hold range: distance pairs for measurements from an ultrasonic sensor for my mobile robot.
Then I push these pairs into a `Vector< Pair<int, int> >` so that I've got my data conveniently stored in
familiar c++ containers.  One of the examples in the library shows this use.  To get my Arduino_Vector
see the README.md file at [This repo](https://github.com/zacsketches/Arduino_Vector.git)


Installation
==============

1. From the command line 'cd' into the Arduino/libraries folder.
2. Enter 'git clone http://github.com/zacsketches/Arduino_pair.git'
3. This will clone the library into your Arduino libraries.
4. Restart the Arduino IDE.  Click on examples and you will see the Arduino_Pair library and the Pair example.
