#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>
#include <string>

class Empregado
{

protected:

  std::string nome;
  double salarioHora;
  double horasDeTrabalho;


  double pagamentoMes (double horasTrabalhadas)
  {

    double horasDeTrabalhoCorrigido = horasTrabalhadas;

    //calculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8)
    {
	  double horasExtras = horasTrabalhadas - 8;
	  horasDeTrabalhoCorrigido += (horasExtras / 2);
    }
    //Retorna o salario corrigido
    return (horasDeTrabalhoCorrigido * salarioHora);
  }


};

#endif
