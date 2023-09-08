#include "App.h"
#include "TV.h"

int main()
{
    TV flat(5, 5.5);
    flat.setScreenSize(10.5);
    flat.getScreenSize();
    flat.getPowerConsumption();
}