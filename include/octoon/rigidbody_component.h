#ifndef OCTOON_RIGIDBODY_COMPONENT_H_
#define OCTOON_RIGIDBODY_COMPONENT_H_

#include <memory>
#include <vector>
#include <octoon/game_component.h>
#include <octoon/physics_feature.h>
#include <octoon/collider_component.h>
#include <octoon/math/math.h>
#include <octoon/runtime/singleton.h>

namespace physx
{
	class PxRigidDynamic;
	class PxRigidBody;
	class PxRigidActor;
}

namespace octoon
{
    enum class RigidbodyType: int
    {
        Static = 0,
        Dynamic = 1,
        Kinematic = 2
    };

    enum class RigidbodySleepMode:int
    {
        NeverSleep, //Rigidbody never automatically sleeps.
        StartAwake, //Rigidbody is initially awake.
        StartAsleep, //Rigidbody is initially asleep.
    };

    class OCTOON_EXPORT Rigidbody final : public GameComponent
	{
		OctoonDeclareSubClass(Rigidbody, runtime::RttiInterface)
        public:
            Rigidbody() noexcept;
			Rigidbody(RigidbodyType type) noexcept;
			Rigidbody(RigidbodyType type, float mass) noexcept;
			Rigidbody(RigidbodyType type, float mass, const math::Vector3& offset) noexcept;
            ~Rigidbody();
            virtual GameComponentPtr clone() const noexcept;

            void setAngularVelocity(float v) noexcept;
            float getAngularVelocity() const noexcept;

            void setGravityScale(float scale) noexcept;
            float getGravityScale() const noexcept;

            void setMass(float m) noexcept;
            float getMass() const noexcept;

			void setMassOffset(math::Vector3 offset) noexcept;
			math::Vector3 getMassOffset() const noexcept;

            void setSleepMode(RigidbodySleepMode mode) noexcept;
            RigidbodySleepMode getSleepMode() const noexcept;

            void setBodyType(RigidbodyType type) noexcept;
            RigidbodyType getBodyType() const noexcept;

        private:
        	virtual void onAttach() except;
            virtual void onDetach() noexcept;

            virtual void onAttachComponent(const GameComponentPtr& component) noexcept;
            virtual void onDetachComponent(const GameComponentPtr& component) noexcept;

			virtual void onFrameBegin() except override;
			virtual void onFrame() except override;
			virtual void onFrameEnd() except override;

			virtual void onMoveBefore() except;
			virtual void onMoveAfter() except;

            void rigidbodyEnter() noexcept;
            void rigidbodyExit() noexcept;
            void rigidbodyChange() noexcept;

        private:
			physx::PxRigidActor* body;

            float angularVelocity;
            float gravityScale; // The degree to which this object is affected by gravity.
            float mass; // Mass of the rigidbody.
			math::Vector3 massOffset;
            RigidbodySleepMode sleepMode;
            math::Vector3 velocity;
            RigidbodyType bodyType;
        
            friend class Collider;
            friend class BoxCollider;
    };
}


#endif // OCTOON_RIGIDBODY_COMPONENT_H_