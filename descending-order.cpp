#include <cinttypes>
#include <vector>
#include <iostream>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
  
  std::vector<int> liczby;
  
  int dzialanie;
  
  // petla tworzaca vector z naszej liczby
  while(a > 0){
    dzialanie = a % 10;
    liczby.push_back(dzialanie);  
    a = a/10;
    
  }

  //sortowanie vectora
  sort(liczby.begin(), liczby.end(), std::greater<int>());

  
  uint64_t wynik; //wynik potrzebny do returna
  //wypisywanie wyniku
  for(int cyfra : liczby){
    wynik = wynik * 10 + cyfra;
  }
  return wynik = 0;
}

int main(){
    //dla testu, wbijasz se randomass liczbe
    std::cout << descendingOrder(8736781936) << "\n";
    
}