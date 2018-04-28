#ifndef OCTOON_TEXT_MESHING_H_
#define OCTOON_TEXT_MESHING_H_

#include <octoon/video/text_contour_group.h>

namespace octoon
{
	namespace video
	{
		class OCTOON_EXPORT TextMeshing final
		{
		public:
			TextMeshing() noexcept;
			TextMeshing(const char* path, std::uint16_t pixelsSize = 12, std::uint16_t bezierSteps = 8) noexcept;
			TextMeshing(const std::string& path, std::uint16_t pixelsSize = 12, std::uint16_t bezierSteps = 8) noexcept;
			TextMeshing(TextFilePtr&& font, std::uint16_t pixelsSize = 12, std::uint16_t bezierSteps = 8) noexcept;
			TextMeshing(const TextFilePtr& font, std::uint16_t pixelsSize = 12, std::uint16_t bezierSteps = 8) noexcept;
			virtual ~TextMeshing() noexcept;

			void setFont(TextFilePtr&& font) noexcept;
			void setFont(const TextFilePtr& font) noexcept;
			const TextFilePtr& getFont() const noexcept;

			void setBezierSteps(std::uint16_t bezierSteps) noexcept;
			std::uint16_t getBezierSteps() const noexcept;

			void setPixelsSize(std::uint16_t pixelsSize) noexcept;
			std::uint16_t getPixelsSize() const noexcept;

			virtual TextMeshingPtr clone() const noexcept;

		private:
			TextMeshing(const TextMeshing&) = delete;
			TextMeshing& operator=(const TextMeshing&) = delete;

		private:
			TextFilePtr font_;

			std::wstring string_;
			std::uint16_t bezierSteps_;
			std::uint16_t pixelSize_;
		};

		OCTOON_EXPORT model::Mesh makeText(const TextMeshing& params, std::wstring&& string) noexcept(false);
	}
}

#endif