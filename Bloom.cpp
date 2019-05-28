#include <cstdint>
#include "Bloom.h"

void Bloom::add(int x) {
    uint32_t hash = get_hash(x);

    if (((filter[hash / 32] >> (hash % 32)) & 1) == 0)
        uniq_num++;

    filter[hash / 32] |= (1 << (hash % 32));
}
int Bloom::get_uniq_num() const {
    return uniq_num + uniq_num / 9;
}