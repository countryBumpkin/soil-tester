#ifndef VH400_H
#define VH400_H

class VH400{
public:	
	VH400(int analog_pin, int pwr_pin);
	float readVoltage();
	double getVWC();
	double getVWC(double voltage);
}

#endif