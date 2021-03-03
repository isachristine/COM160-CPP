#include <iostream>
#include "time.h"    
using namespace std;

int main() {
  /*
    Neste primeiro objeto, passamos todos os parâmetros. Em outras
    palavras, nenhum valor padrão foi usado.
   */
  
  Time t1(23, 59, 59);   
  t1.print();       // 23:59:59
  t1.setHour(12);
  t1.setMinute(30);
  t1.setSecond(15);
  
  t1.print();       // 12:30:15
  cout << "Hour:    " << t1.getHour()   << endl;
  cout << "Minute:  " << t1.getMinute() << endl;
  cout << "Second:  " << t1.getSecond() << endl;

  /*
    Nesta segunda instância, usamos o padrão apenas para minutos e
    segundos.
   */
  Time t2(12); 
  t2.print();  // 12:00:00

  Time t3(23, 59, 58);
  t3.print();  // 23:59:58
  t3.nextSecond();
  t3.print();  // 23:59:59
  t3.nextSecond();
  t3.print();  // 00:00:00

  int h1, m1, s1;
  cout << "Configurando seu relogio... " << endl;
  cout << "Informe as horas: " << endl;
  cin >> h1;
  cout << "Informe os minutos: " << endl;
  cin >> m1;
  cout << "Informe os segundos: " << endl;
  cin >> s1;

  Time t4(h1, m1, s1);
  cout << "Você digitou o seguinte horario: ";
  t4.print();
  cout << "Vendo o tempo passar..." << endl;
  int counter = 0;
  while (counter <= 10)
  {
    t4.nextSecond();
    t4.print();
    counter += 1;
  }
  
  



}
