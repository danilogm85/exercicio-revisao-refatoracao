#include <string>
#include "Empregado.hpp"
const int MESES_DO_ANO = 12;

class Vendedor : public Empregado {

  public:
    Vendedor(std::string _nome, double _salarioHora, int _quotaMensalVendas);
    void set_quotaMensalVendas(double _quotaMensalVendas) {quotaMensalVendas =  _quotaMensalVendas;}
    double get_quotaMensalVendas() {return quotaMensalVendas;}
	  double quotaTotalAnual() {return quotaMensalVendas * MESES_DO_ANO;}
    void print_all_info(double horasTrabalhadas);

  private:
    double quotaMensalVendas;

};