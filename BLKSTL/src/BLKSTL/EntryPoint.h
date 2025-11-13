#pragma once


#ifdef BK_PLATFORM_WINDOWS

extern BLKSTL::Application* BLKSTL::CreateApplication();

int main(int argc,char ** argv) {

	auto app = BLKSTL::CreateApplication();
	app->run();
	delete app;

}

#endif
