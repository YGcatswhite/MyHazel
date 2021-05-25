#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();
int main(int argc,char** argv)
{
	printf("Hazel Engine");
	auto app = Hazel::CreateApplication();
	app->run();
	delete app;
}

#endif 
