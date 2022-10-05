#include <iostream>     // std::cout
#include <functional>   // std::plus
#include <algorithm>    // std::transform
# include <vector>
# include <iterator>
int main () {
  int first[]={1,20,34,402,500, 0};
  int second[]={1,20,34,402,500};
  int results[6];
  std::transform (first+1 , first+6, second, results, std::minus<int>());
  for (int i=0; i<5; i++)
	std::cout << results[i] << ' ';
  std::cout << '\n';
  std::vector<int> stock;
  std::vector<int> stock2;
  stock.push_back(1);
  stock.push_back(20);
  stock.push_back(34);
  stock.push_back(402);
  stock.push_back(500);
  stock.push_back(0);
  stock2.push_back(1);
  stock2.push_back(20);
  stock2.push_back(34);
  stock2.push_back(402);
  stock2.push_back(500);
  std::vector<int> results2(6);
  std::transform (stock.begin()+1 , stock.end()+1, stock2.begin(), results2, std::minus<int>());
  for (int i=0; i<5; i++)
	std::cout << results2[i] << ' ';
  std::cout << '\n';


  return 0;
}
