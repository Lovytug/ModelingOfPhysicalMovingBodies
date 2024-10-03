#pragma once
#include <vector>
#include <memory>
#include "DynamicObject.h"
#include "StaticObject.h"

class ManagerObject
{
public:
	void createDynamicObject(std::shared_ptr<DynamicObject> obj);
	void createStaticObject(std::shared_ptr<StaticObject> obj);
	void updateStateOfObject();
	void drawAllObject();

private:
	std::vector<std::shared_ptr<DynamicObject>> dynamicBodies;
	std::vector<std::shared_ptr<StaticObject>> staticBodies;
};

