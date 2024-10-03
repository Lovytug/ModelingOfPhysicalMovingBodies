#include "ManagerObject.h"

void ManagerObject::createDynamicObject(std::shared_ptr<DynamicObject> obj)
{
	dynamicBodies.push_back(obj);
}

void ManagerObject::createStaticObject(std::shared_ptr<StaticObject> obj)
{
	staticBodies.push_back(obj);
}

void ManagerObject::drawAllObject()
{
	for (const auto& obj : dynamicBodies)
		obj->drawObject();
	for (const auto& obj : staticBodies)
		obj->drawObject();
}

void ManagerObject::updateStateOfObject()
{

}