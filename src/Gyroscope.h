#ifndef GYROSCOPE_H
#define GYROSCOPE_H

#include "lms2012.h"

class Gyroscope {
  int m_file;
  unsigned int m_port;
  ANALOG *m_p_device;
public:
  Gyroscope(const unsigned int port);
  ~Gyroscope();
  float Read();
  //returns gyro bias
  float Calibrate(const unsigned int samples);
};

#endif