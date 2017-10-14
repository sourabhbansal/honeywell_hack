#ifndef __REACTORSELECTIMPL_H__
#define __REACTORSELECTIMPL_H__

#include "ReactorInterface.h"

namespace reactor {

	class ReactorSelectImpl : public ReactorInterface {
	protected:
		virtual void run(int _cid, EventType _eType);
		
	};

} 
#endif
