#include "Engenheiro.cpp"
#include "Vendedor.cpp"
#define quantEng 3
#define quantVend 3

int main ()
{
  
  Engenheiro *eng = new Engenheiro [quantEng];
  
  //inserindo os dados do eng 1
  
  eng[0].nome = "Joao Snow";
  eng[0].salarioHora = 35;
  eng[0].projetos = 3;
  eng[0].horasDeTrabalho = 9.5;

  //inserindo os dados do eng 2
  
  eng[1].nome = "Daniela Targaryen";
  eng[1].salarioHora = 30;
  eng[1].projetos = 1;
  eng[1].horasDeTrabalho = 8;
  
  //inserindo os dados do eng 3
  
  eng[2].nome = "Bruno Stark";
  eng[2].salarioHora = 30;
  eng[2].projetos = 2;
  eng[2].horasDeTrabalho = 8;
  
  //printando dados dos Engenheiros
  
  int i=0;
  while(i < quantEng)
  {
        std::cout << "Nome: " << eng[i].nome << std::endl;
        std::cout << "Salario Mes: " << eng[i].pagamentoMes (eng[i].horasDeTrabalho) << std::endl;
        std::cout << "Projetos: " << eng[i].projetos << std::endl;
        std::cout << std::endl;
        i++;
  }
  
  //inserindo os dados dos vendedores
   
  //inserindo os dados do vend 1
 
  Vendedor *vend = new Vendedor[quantVend];
  vend[0].nome = "Tonho Lannister";
  vend[0].salarioHora = 20;
  vend[0].quotaMensalVendas = 5000;
  vend[0].horasDeTrabalho = 6;

  //inserindo os dados do vend 2
  
  vend[1].nome = "Jose Mormont";
  vend[1].salarioHora = 25;
  vend[1].quotaMensalVendas = 3000;
  vend[1].horasDeTrabalho = 8;
  
  //inserindo os dados do vend 3
  
  vend[2].nome = "Sonia Stark";
  vend[2].salarioHora = 30;
  vend[2].quotaMensalVendas = 4000;
  vend[2].horasDeTrabalho = 8;
  
  //printando dados dos Vendedores
  
  i=0;
  while(i < quantVend)
  {
        std::cout << "Nome: " << vend[i].nome << std::endl;
        std::cout << "Salario Mes: " << vend[i].pagamentoMes (vend[i].horasDeTrabalho) << std::endl;
        std::cout << "Quota vendas: " << vend[i].quotaVendaAnual() << std::endl;
        std::cout << std::endl;
        i++;
  }

  return 0;
}
