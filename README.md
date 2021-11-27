# C-assignment Modul5
Ett program med sex funktioner för att räkna summan av priserna i aktuell valuta och i svenska kronor.
Input:       Valutakurs och olika pris i aktuell valuta o.
Output:      Summan av priserna i aktuell valuta.
             Summan av priserna i svenska kronor.
Begränsning: Alla tal är bara postiv


Algoritm 
Följande algoritm ska användas i programmet: 
 
  1.  Så länge användaren inte valt att avsluta programmet, upprepa följande: 
    1.1  Skriv ut menyn 
    1.2  Läs in val 
    1.3  Om valet är att sätta valutakurs 
      1.3.1  Efterfråga valutakurs 
      1.3.2  Sätt valutakurs 
    1.4  Om valet är att konvertera priser 
      1.4.1  Summera priser så länge användaren ej avbryter 
        1.4.1.1  Efterfråga pris (eller klar med inmatning) 
        1.4.1.2  Uppdatera summan (om det är ett giltigt pris) 
      1.4.2  Skriv ut summan i lokal valuta och i svenska kronor 
    1.5  Om valet är ogiltigt 
      1.5.1  Skriv ut att det var ett ogiltigt val 
  2  Avsluta programmet 
  
  Krav på implementationen 
• Funktionaliteten i steg 1.1, 1.2, 1.3.1, 1.4.1, 1.4.1.1, samt 1.4.2 ska lösas i funktioner, totalt sex 
funktioner förutom main-funktionen. 
• Observera att funktionen som hör till steg 1.4.1.1 ska anropas från funktionen 1.4.1. 
• All utskrift på skärm ska se exakt ut som enligt nedanstående exempel. 


[Tom rad] 
Your shopping assistant 
 
1. Set exchange rate in SEK (current rate: 1.00) 
2. Convert prices from the foreign currency 
3. End  
Give your choice (1 - 3): 1 
 
Give exchange rate: 9.71  
1. Set exchange rate in SEK (current rate: 9.71) 
2. Convert prices from the foreign currency 
3. End 
 
Give your choice (1 - 3): 4 
 
Not a valid choice! 
 
1. Set exchange rate in SEK (current rate: 9.71) 
2. Convert prices from the foreign currency 
3. End 
 
Give your choice (1 - 3): 2 
 
Give price (finish with < 0): 2.75 
Give price (finish with < 0): 3.50 
Give price (finish with < 0): -23 
 
Sum in foreign currency: 6.25 
Sum in SEK: 60.69 
 
1. Set exchange rate in SEK (current rate: 9.71) 
2. Convert prices from the foreign currency 
3. End 
 
Give your choice (1 - 3): 3 
 
End of program! 
[Tom rad] 
