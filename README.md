# Bloom-filter
The aim of this project is to implement my own [Bloom-filter](https://en.wikipedia.org/wiki/Bloom_filter).
I created algotrithm which approximately counts different elements in array.

I implemented class **Bloom**, which contains two methods: 
* void add(int x) - adds element to set, to the Bloom-filter.
* int get_uniq_num() - returns approximate amount of unique elements in set, using Bloom-filter.
