

#include "BLKSTL.h"


class SandBox : public BLKSTL::Application
{
public:
	SandBox()
	{
		

	}

	~SandBox(){}


};


BLKSTL::Application* BLKSTL::CreateApplication()
{
	return new SandBox();
}