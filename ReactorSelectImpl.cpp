#include <vector>
#include <iostream>
#include "ReactorSelectImpl.h"
#include "EventType.h"

namespace reactor {

	void ReactorSelectImpl::run(int _cid, EventType _eType ) {
		std::cout << "Start  ReactorSelectImpl " << std::endl;
		/*std::vector<int> aReadFds;
		std::vector<int> aWriteFds;
		std::vector<int> aExceptFds;*/

		int aResult =int(_eType);

		switch (aResult) {
		case 0:
			std::cout << "Error " << std::endl;
			break;
		case 1:
			std::cout << "ready to add" << std::endl;
			break;
		case 2:
			std::cout << "ready to sub" << std::endl;
			break;
		
			
		}
	}

} // namespace reactor
