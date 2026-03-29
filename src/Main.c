#if defined __linux__
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/Supermarket.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "/home/codeleaded/System/Static/Library/Supermarket.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/WindowEngine1.0.h"
#include "F:/home/codeleaded/System/Static/Library/Supermarket.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

Supermarket market;

void Setup(AlxWindow* w){
	market = Supermarket_New();
}
void Update(AlxWindow* w){
	

	Clear(BLACK);

	
}
void Delete(AlxWindow* w){
	Supermarket_Free(&market);
}

int main(){
    if(Create("Supermarket",1900,1000,1,1,Setup,Update,Delete))
        Start();
    return 0;
}