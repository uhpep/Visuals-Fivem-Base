#include "includes.h"
#include "VisualsBypass.hpp"
namespace FiveMHacks
{
	bool Invisivle = false;

	void Features()
	{
		if (Invisivle)
		{
			int player = NativeBypassv2::Invoke<0xD80958FC74E988A6, int>();
			NativeBypassv2::Invoke<0xEA1C610A04DB6BBB, bool>(player, NativeBypassv2::Invoke<0x43A66C31C68491C0, int>(player), false);
		}
		else
		{
			int player = NativeBypassv2::Invoke<0xD80958FC74E988A6, int>();
			NativeBypassv2::Invoke<0xEA1C610A04DB6BBB, bool>(player, NativeBypassv2::Invoke<0x43A66C31C68491C0, int>(player), true);
		}
	}
}