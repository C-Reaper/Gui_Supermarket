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
	market = Supermarket_Make(
	    (BarCode[]){
			0x0ULL,                 // 0 (NONE)
            0x1ULL,                 // 1 (SEPERATOR)
            0x3bcd11bbf0744cffULL,  // 2
            0x1326e53172768b23ULL,  // 3
            0x2286fa3ff80dd449ULL,  // 4
            0x4ca194b3a8a30925ULL,  // 5
            0x659638ab7f8cf8a3ULL,  // 6
            0x578fad6f6d6712f7ULL,  // 7
            0x4ead5338661be08dULL,  // 8
            0x1c73a8bd4cc4ed18ULL,  // 9
            0x5338c014469c1687ULL,  // 10
            0x64ac5f5b0097700aULL,  // 11
            0x6b8410ae0c454e6cULL,  // 12
            0x1d352e5ecd16d49fULL,  // 13
            BARCODE_ERROR
	    },
	    (Supermarket_Product[]){
			Supermarket_Product_New("NONE",0UL),
			Supermarket_Product_New("SEPERATOR",0UL),
			Supermarket_Product_New("Apple",99UL),
			Supermarket_Product_New("Banana",59UL),
			Supermarket_Product_New("Orange",79UL),
			Supermarket_Product_New("Milk",149UL),
			Supermarket_Product_New("Bread",89UL),
			Supermarket_Product_New("Eggs",299UL),
			Supermarket_Product_New("Cheese",349UL),
			Supermarket_Product_New("Yogurt",129UL),
			Supermarket_Product_New("Butter",99UL),
			Supermarket_Product_New("Jam",199UL),
			Supermarket_Product_New("Coffee",249UL),
			Supermarket_Product_New("Tea",199UL),
			Supermarket_Product_New("Soda",149UL),
			Supermarket_Product_New("Water",99UL),
			Supermarket_Product_New("Chicken",499UL),
			Supermarket_Product_New("Beef",599UL),
			Supermarket_Product_New("Pork",399UL),
			Supermarket_Product_New("Fish",699UL),
			Supermarket_Product_Null()
	    }
	);

	Supermarket_Build_Checkout(&market);
	Supermarket_Print(&market);
}
void Update(AlxWindow* w){
    if(Stroke(ALX_KEY_SPACE).PRESSED){
        BarCode_Analyser_Start(&market.bca,market.codes.size);
    }

	//Clear(BLACK);

	Supermarket_Render(&market,WINDOW_STD_ARGS,0.0f,0.0f,GetWidth(),GetHeight(),0UL);
}
void Delete(AlxWindow* w){
	Supermarket_Free(&market);
}

int main(){
    if(Create("Supermarket",1900,1000,1,1,Setup,Update,Delete))
        Start();
    return 0;
}
