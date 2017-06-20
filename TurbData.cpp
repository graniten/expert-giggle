#include "TurbData.h"

/* Burnk Test*/

TurbData::TurbData()
{

	m_Xport = new Xport();

}


TurbData::~TurbData()
{
}

ofstream TurbData::RawDataToFile() {

	char *rawData = m_Xport->StringFromSensor();

}