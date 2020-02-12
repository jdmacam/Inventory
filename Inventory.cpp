#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
using std::endl;
/* Inventory Constructor
  Passes the name, price, and # of item and sets the
  respective Inventory values to those.
*/
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/* sell()
  If there is still stock (i.e. at least 1 in stock) recrement m_in_stock.
  Else, it is out of stock, output out of stock message
*/
void Inventory::sell()
{
  if (m_in_stock <= 0 ){
    cout << "Sorry, that item is out of stock" << endl;
  }
  else {
    m_in_stock--;
  }
  return;
}

/* << operator definition
  Defines the << operator for Inventory class. Formats and prints a message that
  summarizes the name and price of Inventory object
*/
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
