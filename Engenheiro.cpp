#include "Engenheiro.hpp"

Engenheiro::Engenheiro(std::string _nome, double _salarioHora, int _projetos){
  set_nome(_nome);
  set_salarioHora(_salarioHora);
  set_projetos(_projetos);
}

void Engenheiro::print_all_info(double horasTrabalhadas) {
  std::cout << "Nome: " << get_nome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << get_projetos() << std::endl;
  std::cout << std::endl;
}