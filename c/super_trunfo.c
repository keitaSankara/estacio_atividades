int main()
{
   float pib, pib2, area, area2;
   int populacao, populacao2, turismo, turismo2;
   char estado, estado2;

   char cidade[50], cidade2[50];
   char codigo[5], codigo2[5];

  printf("Vamos jogar Super Trunfo?\n Primeiramente vamos definir as cartas do jogo\n");

  fazcarta("01",codigo, estado, cidade, populacao, turismo, area, pib);
  fazcarta("02",codigo2, estado2, cidade2, populacao2, turismo2, area2, pib2);
 
   
  vercarta(codigo, estado, cidade, populacao, turismo, area, pib);
  vercarta(codigo2, estado2, cidade2, populacao2, turismo2, area2, pib2);
   
   
}

void vercarta( char codigo[5], char estado, char cidade[50], int populacao, int turismo, float area, float pib)
{
   printf("Codigo : %s\n Estado : %s\n Cidade : %s\n População: %d\n Pontos de turismo:%d\n area total: %f\n Pib : %f\n", codigo, estado, cidade, populacao, turismo, area, pib);
      
}

void fazcarta(char ncarta[2],char codigo[5], char estado, char cidade[50], int populacao, int turismo, float area, float pib)
{
   printf("Carta numero %s\n", nca);
   scanf("Digite a letra do estado      :%s", estado);
   scanf("Digite o nome da cidade       :%s", cidade);
   scanf("Digite a população da cidade  :%d", &populacao);
   scanf("Digite a area total da cidade :%d", &area);
   scanf("Digite os pontos de turismo   :%s", &turismo);
   scanf("Digite o pib da cidade        :%s", &pib);
   char codigo[5] = estado + ncarta;       
   
      
}