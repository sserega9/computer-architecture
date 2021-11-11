#include "table.h"

int main()
{
    using namespace std;
    
   	Table* table = new Table(15.0, 10.0, 1.5, 2.5);

   	table->placeTheTable(2.5, 1.5);

   	table->flipTheTable();

    return 0;
}
