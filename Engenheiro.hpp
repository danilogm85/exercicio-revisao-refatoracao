#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
    Engenheiro(std::string _nome, double _salarioHora, int _projetos);
    int get_projetos() {return projetos;}
    void set_projetos(int _projetos) {projetos = _projetos;}
    void print_all_info(double horasTrabalhadas);

  private:  
	  int projetos;
	
};