/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <Namiono/Namiono.h>
#pragma once

namespace Namiono
{
	namespace Network
	{
		class RBCP_Client
		{
		public:
			RBCP_Client();
			void Set_Item(const _USHORT & item);
			const _USHORT & Get_Item() const;
			void Set_Layer(const RBCP_LAYER & layer);
			const RBCP_LAYER & Get_Layer() const;
			void Set_MulticastIP(const _IPADDR & ip);
			const RBCP_DISCOVERYCONTROL& Get_Control();
			const _IPADDR & Get_MulticastIP() const;
			~RBCP_Client();
		private:
			_USHORT* item = nullptr;
			RBCP_LAYER* layer = nullptr;

			_IPADDR* mcastip = nullptr;
			RBCP_DISCOVERYCONTROL* control = nullptr;
		};
	}
}
