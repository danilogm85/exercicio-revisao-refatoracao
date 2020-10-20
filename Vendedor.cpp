#include "Vendedor.hpp"

Vendedor::Vendedor(std::string _nome, double _salarioHora, int _quotaMensalVendas){
  set_nome(_nome);
  set_salarioHora(_salarioHora);
  set_quotaMensalVendas(_quotaMensalVendas);
}

void Vendedor::print_all_info(double horasTrabalhadas) {
  std::cout << "Nome: " << get_nome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}