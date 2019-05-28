#ifndef TASK_BLOOM_H
#define TASK_BLOOM_H

struct Bloom{
    Bloom() = default;
    ~Bloom() = default;
    Bloom(Bloom &bloom) = default;

    void add(int x);
    int get_uniq_num() const;

private:
    const static uint32_t filter_size = 255 * 1024 * 8;
    uint32_t uniq_num = 0;

    uint32_t filter[filter_size];

    uint32_t get_hash(int x) {
        return (x * 239) % (32 * filter_size);
    }
};

#endif //TASK_BLOOM_H
