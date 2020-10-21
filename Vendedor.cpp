#include <string>
#include "Empregado.hpp"
#define meses 12

class Vendedor:public Empregado
{

public:

  int quotaMensalVendas;

  int quotaVendaAnual ()
  {
    return (quotaMensalVendas * meses);
  }

};
