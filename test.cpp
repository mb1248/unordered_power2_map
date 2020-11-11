#include "include/unordered2_map.h"
#include <iostream>

int main() {
  std::unordered2_map<unsigned int, int> map;
  map.reserve(3);

  map[0] = 0;
  std::cout << map.bucket_count() << '\n';

  map[2] = 1;
  std::cout << map.bucket_count() << '\n';

  for (int i = 0; i < map.bucket_count(); i++) {
    std::cout << i << ": " << map.bucket_size(i) << '\n';
  }

  map[5] = 1;
  std::cout << map.bucket_count() << '\n';

  map[6] = 1;
  std::cout << map.bucket_count() << '\n';

  map[7] = 1;
  std::cout << map.bucket_count() << '\n';

  for (int i = 0; i < map.bucket_count(); i++) {
    std::cout << i << ": " << map.bucket_size(i) << '\n';
  }

  std::cout << map.bucket_count() << ", " << map.max_bucket_count() << ", "
            << map.bucket(255) << '\n';
}
