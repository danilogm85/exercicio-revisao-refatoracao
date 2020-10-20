#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {
  double t = horasTrabalhadas;
  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > MAX_HORAS) {
    double x = horasTrabalhadas - MAX_HORAS;
    t += x / 2;
  }
  return t * salarioHora;
}