#include "PhysicsFactory.h"

#include "PhysicsWorld.h"
#include "RigidBody.h"

namespace physics {
	PhysicsFactory::PhysicsFactory() : iPhysicsFactory() {

	}

	PhysicsFactory::~PhysicsFactory() {

	}

	iPhysicsWorld* PhysicsFactory::CreateWorld()
	{
		return new PhysicsWorld();
	}

	iRigidBody* PhysicsFactory::CreateRigidBody(const RigidBodyDesc& desc, iShape* shape)
	{
		return RigidBody(&desc, shape);
	}

	iSoftBody* PhysicsFactory::CreateSoftBody(const SoftBodyDesc& desc)
	{
		return nullptr;
	}
}