/*
 * Решение задач курса "Введение в программирование С++"
 * 
 * [URL=https://stepik.org/course/363/promo]
 * 
 * Copyright 2020 Черноус Алексей <alexch82@ya.ru>
 * 
 */
#include <iostream>
#include <set>

int main() {
  int n;
  std::cin >> n;
  std::set <int> s;
  for (int i=0; i<n; i++){
    int x;
    std::cin >> x;
    if (s.find(x) == s.end()){
		s.insert(x);
		std::cout << "NO" << std::endl;
	} else
		std::cout << "YES" << std::endl;
  }
  return 0;
}
