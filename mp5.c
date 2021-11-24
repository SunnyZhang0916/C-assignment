/*
 * Modul 5 uppgifter

 * Fil:         mp5.c
 * Författare:  Sunny Zhang
 * Datum:       18 oktober 2021
 */

/*
* Beskrivning: Ett program med sex funktioner för att räkna summan av priserna i aktuell valuta och i svenska kronor.
* Input:       Valutakurs och olika pris i aktuell valuta o.
* Output:      Summan av priserna i aktuell valuta.
                Summan av priserna i svenska kronor.
* Begränsning: Alla tal är bara postiv.
*/

#include <stdio.h>

/* Funktionsdeklarationer */
void print_menu(double exchange_rate);
int read_choice(void);
double set_exchange_rate(void);
double read_price(void);
double new_amount(double sum);
void sek_amount(double sum, double exchange_rate);

int main(void)

{
  printf("\nYour shopping assistant\n");
  double exchange_rate = 1;
  int choice;
  double sum;

  /* 1. Så länge användaren inte valt att avsluta programmet, upprepa följande: */
  do{

    /*1.1 Skriv ut menyn*/
    print_menu(exchange_rate);

    /*1.2 Läs in val*/
    choice = read_choice();

    switch(choice)
    {

      /* 1.3 Om valet är att sätta valutakurs */
      case 1:
        /* 1.3.2 Sätt valutakurs */
        exchange_rate = set_exchange_rate();
      break;

      /* 1.4 Om valet är att konvertera priser */
      case 2:
      /* sätta sum är 0 att för nya sum varje gång*/
      sum = 0;

      sum = new_amount(sum);

      /*1.4.1.2 Uppdatera summan (om det är ett giltigt pris)*/
      sek_amount(sum,exchange_rate);
      break;

      /* 2 Avsluta programmet */
      case 3:
        printf("End of program!\n\n");
      break;

      /* 1.5 Om valet är ogiltigt */
      default:
        /* 1.5.1 Skriv ut att det var ett ogiltigt val */
        printf("Not a valid choice!\n");
    }

  }while(choice != 3);

  return 0;
}

/* Beskrivning: Skriver ut menyn med växlingskursen
 * Input: växlingskursen
 * Output: Returnerar inget, skriver ut efterfråga valutakurs.
 */
void print_menu(double exchange_rate)
{
  printf("\n1. Set exchange rate in SEK ");

  printf("(current rate: %.2f)\n", exchange_rate);

  printf("2. Convert prices from the foreign currency\n");

  printf("3. End\n\n");
}

/* Beskrivning: Läs in val
 * Input: val
 * Output: Returnerar till val, skriver ut vad har användare angett
 */
int read_choice(void)
{
  int choice1;

  printf("Give your choice (1 - 3): ");
  scanf("%d",&choice1);
  printf("\n");

  return choice1;
}

/* Beskrivning: 1.3.1 Efterfråga valutakurs
 * Input: valutakurs
 * Output: Returnerar till valutakurs, skriver ut vad har användare angett
 */
double set_exchange_rate(void)
{
  printf("Give exchange rate: ");

  double exchange_rate1;
  scanf("%lf",&exchange_rate1);

  return exchange_rate1;
}

/* Beskrivning: 1.4.1.1 Efterfråga pris (eller klar med inmatning)
 * Input: price
 * Output: Returnerar till price, skriver ut vad har användare angett.
 */
double read_price(void)
{
  double price;

  printf("Give price (finish with < 0): ");
  scanf("%lf",&price);

  return price;
}

  /* Beskrivning: Läs in price från funktion "double read_price(void)"
  * Input: summan pris om det är positiv
  * Output: Returnerar till sum.
  */
double new_amount(double sum)
{
  double price;

  price = 0;
  while(price >= 0){

    price = read_price();

    if(price >= 0){
        sum += price;
    }
  }

  return sum;
}

/* Beskrivning: 1.4.2 Skriv ut summan i lokal valuta och i svenska kronor
* Input: sum från "double new_amount(void)" och exchange_rate från
* Output: Returnerar ingent, Skriv ut summan i lokal valuta och i svenska kronor
*/
void sek_amount(double sum, double exchange_rate)
{
  printf("\nSum in foreign currency: %.2lf\n",sum);

  double sek_sum = sum * exchange_rate;

  printf("Sum in SEK: %.2lf\n",sek_sum);
}
