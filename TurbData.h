#include "Xport.h"

class TurbData 
{
protected:
	Xport *m_Xport;
private:
	char *buffer;
	ofstream RawDataToFile();
public:
	TurbData();
	~TurbData();
};

