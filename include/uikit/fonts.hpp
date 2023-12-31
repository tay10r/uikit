#pragma once

#include <imgui.h>

namespace uikit {

ImFont*
open_font(const char* resource_path,
          float font_size,
          const ImFontConfig* config = nullptr,
          const ImWchar* glyph_ranges = nullptr);

} // namespace uikit
