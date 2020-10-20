#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>
const int MAX_HORAS = 8;

class Empregado {
	
  public:
    double pagamentoMes(double horasTrabalhadas);

    void set_nome(std::string _nome) {nome = _nome;}
    void set_salarioHora(double _salarioHora) {salarioHora = _salarioHora;}
    std::string get_nome() {return nome;}
    double get_salarioHora() {return salarioHora;}

  protected:
    double salarioHora;  
    std::string nome;
	
};

#endif