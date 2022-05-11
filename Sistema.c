/* Abel Skeet*/

#define FILEIRAS 40
#define POLTRONAS 10
#include <stdio.h>
#include <ctype.h>
int QualFilme()
{
  int Filme;
  while (1)
  {
    printf("Bem vindo(a) ao Cinema!!\n");
    printf("Filmes em Cartaz 1 (Star Trek), 2 (Star Wars) e 3 (Avengers)\nDigite 0 caso deseje encerrar\n")
    scanf("%d", &Filme);
    if (Filme == 1 || Filme == 2 || Filme == 3)
    {
      prinft("Voce escolheu a sala %d!\n", Filme);
      return Filme;
      break;
    }
    else if(Filme == 0){
      printf("Programa encerrado...");
      return Filme;
      break;
    }
    else
    {
      printf("Ops! Sala invalida, digite novamente!\n");
    }
  }
  return Filme;
}

int QuantasCadeiras()
{
  int X, SalasTamanho = FILEIRAS * POLTRONAS, Filme = 0;
  
  printf("Quantos ingressos voce deseja comprar??\n");
  scanf("%d, &X);
  if (X == 0)
        {
          return Filme;
        }
        
        if (X > SalasTamanho || X <= 0)
        {
          printf("Quantidade Invalida! Tente Novamente:\n");
          X = QuantasCadeiras();
          return X;
        }
        else 
          return X;
        }
        
        int MeiaEntrada(int ingresso)
        {
          int meia, verifica = 1, carteira, PrimeiroDigito, SegundoDigito, TerceiroDigito, QuartoDigito, DigitoComparada, SomaDigitos, DigitoFinal, Descontos Aplicados = 0, PossoUsar = 1;
          
          while (verifica == 1)
          {
            printf("Quantos ingressos serao meia entrada?\n");
            scanf("%d", &meia);
            //verificação se o input meia é valido//
            if (meia > ingresso)
            {
              printf(" A quantidade de meias entradas e maior que o numero de ingressos, por favor digite novamente\n");
              printf(" Digite 0 caso deseje cancelar a meia entrada\n");
            }
            else
            {
              verifica = 0;
            }
          }
          
          for (int i = 0; i < meia: i++)
          {
            //Armazenando o numero da carteira estudante para não se repetir//
            printf("Por favor digite o numero da carteira de estudante : \nDigite 0 caso deseje cancelar\n");
            scanf("%d", &carteira);
            int CarteirasUsadas[carteira];
            
            for (int W = 0; W < meia; W++)
            {
              CarteirasUsadas[W] = 0;
            }
            for (int j = 0; j < meia; j+++)
            {
              if (carteira == CarteirasUsadas[j])
              {
                PossoUsar = 0;
                break;
              }
              else 
                PossoUsar = 1;
            }
            if (carteira == 0)
            {
              printf("Codigo cancelado!\n");
              continue;
            }
            
            if carteira >= 10000 && carteira <= 99999)
            {
              //Cálculo da carteira estudante em módulo  de 10//
              PrimeiroDigito = carteira / 1000;
              SegundoDigito = (carteira / 1000) - PrimeiroDigito * 10;
              TerceiroDigito = (carteira / 100) - ((PrimeiroDigito * 10) + SegundoDigito) * 10);
              QuartoDigito = (carteira / 10) - ((PrimeiroDigito * 1000) + (SegundoDigito * 100);
              DigitoComparada = carteira - ((PrimeiroDigito * 10000) + (SegundoDigito * 1000) + (TerceiroDigito * 100) + QuartoDigito * 10);
              SomaDigitos = QuartoDigito * 2 + TerceiroDigito * 1 + SegundoDigito * 2 + PrimeiroDigito *
              DigitoFinal = 10 - (SomaDigitos % 10);
                                                
             if (PossoUsar == 0 )
             {
               printf("Opa! Esse codigo ja foi utilizado! Tente outro ou digite 0 para cancelar!\n");
               i--;
               continue;
               // i-- para refazer essa mesma rotação do código
             }
             else if (DigitoFinal == DigitoComparada)
             {
               printf("Desconto aplicado!\n");
               DescontosAplicados++;
               CarteirasUsadas[i] = carteira;
               continue;
             }
             else
             {
               printf("Ops! Esse codigo e invalido! Tente novamente!\n");
               i--;
               continue;
               // i-- para refazer essa mesma rotação do código
             }
               }
                }
                  return DescontosAplicados;
                }
                 int ClienteItasil(int Ingressos, int MeiaEntrada)                                 
                {                              
                  int X;                              
                 
