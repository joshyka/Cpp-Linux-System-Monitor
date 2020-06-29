#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // DONE: See src/processor.cpp

  // DONE: Declare any necessary private members
 private:
    long prevIdleJiffies_{0};
    long prevActiveJiffies_{0};
};

#endif