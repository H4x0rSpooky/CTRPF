#include "CTRPluginFramework.hpp"
#include "Unicode.h"
#include "csvc.h"
#include "3ds.h"
#include <math.h>
#include <vector>
#include <ctime>

namespace CTRPluginFramework
{
	u32 patch_address = 0;
	u32 offset = 0, data = 0;
	u32 data32 = 0, offset32 = 0, cmp32 = 0;
	u16 data16 = 0, offset16 = 0, cmp16 = 0;
	u8 data8 = 0, offset8 = 0, cmp8 = 0;
	
	void	function(MenuEntry *entry)
	{
		OSD::Notify("Hello World");
	}
}