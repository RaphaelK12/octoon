// +----------------------------------------------------------------------
// | Project : ray.
// | All rights reserved.
// +----------------------------------------------------------------------
// | Copyright (c) 2013-2017.
// +----------------------------------------------------------------------
// | * Redistribution and use of this software in source and binary forms,
// |   with or without modification, are permitted provided that the following
// |   conditions are met:
// |
// | * Redistributions of source code must retain the above
// |   copyright notice, this list of conditions and the
// |   following disclaimer.
// |
// | * Redistributions in binary form must reproduce the above
// |   copyright notice, this list of conditions and the
// |   following disclaimer in the documentation and/or other
// |   materials provided with the distribution.
// |
// | * Neither the name of the ray team, nor the names of its
// |   contributors may be used to endorse or promote products
// |   derived from this software without specific prior
// |   written permission of the ray team.
// |
// | THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// | "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// | LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// | A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// | OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// | SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// | LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// | DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// | THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// | (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// | OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// +----------------------------------------------------------------------
#ifndef OCTOON_GAME_SCENE_H_
#define OCTOON_GAME_SCENE_H_

#include <octoon/game_object.h>

namespace octoon
{
	class OCTOON_EXPORT GameScene final : public runtime::RttiInterface
	{
		OctoonDeclareSubClass(GameScene, runtime::RttiInterface)
	public:
		GameScene() noexcept;
		GameScene(const std::string& name) noexcept;
		~GameScene() noexcept;

		void set_active(bool active) except;
		bool get_active() const noexcept;

		void set_game_listener(const GameListenerPtr& listener) noexcept;
		GameListenerPtr get_game_listener() const noexcept;

		void set_name(std::string&& name) noexcept;
		void set_name(const std::string& name) noexcept;
		const std::string& get_name() const noexcept;

		std::size_t get_instance_id() const noexcept;

		GameObjectPtr get_root_object() const noexcept;

		GameScenePtr clone() const noexcept;

	private:
		class RootObject : public GameObject
		{
		public:
			RootObject(GameScene* scene) noexcept;
			virtual ~RootObject() noexcept;

			virtual GameScene* get_game_scene() noexcept;
			virtual const GameScene* get_game_scene() const noexcept;

		private:
			GameScene* scene_;
		};

		std::string name_;
		std::size_t instance_id_;

		GameObjectPtr  root_;
		GameListenerPtr game_listener_;
	};
}

#endif