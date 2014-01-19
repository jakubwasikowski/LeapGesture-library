#include <string>

#include "../Types/StaticRecFeatureVersion.h"

#ifndef TESTINGSTATICRECCONF_H_
#define TESTINGSTATICRECCONF_H_

class TestingStaticRecConf {
public:
	std::string configurationPath;
	std::string configurationName;
	StaticRecFeatureVersion featureSetVersion;
	double classificationThresholdRate;

	TestingStaticRecConf();
};

#endif /* TESTINGSTATICRECCONF_H_ */
