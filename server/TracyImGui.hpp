#ifndef __TRACYIMGUI_HPP__
#define __TRACYIMGUI_HPP__

#include "../imgui/imgui.h"
#include "../imgui/imgui_internal.h"

ImVec2 operator+( const ImVec2& l, const ImVec2& r ) { return ImVec2( l.x + r.x, l.y + r.y ); }
ImVec2 operator-( const ImVec2& l, const ImVec2& r ) { return ImVec2( l.x - r.x, l.y - r.y ); }

#endif
