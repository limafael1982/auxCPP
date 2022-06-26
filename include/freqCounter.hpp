#ifndef FREQCOUNTER_HPP
#define FREQCOUNTER_HPP

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>


template<class T>
class FreqCounter
{
private:
    std::map<T, int> freqMap;

protected:
    
    std::set<T> getDifferentElementsFromVector(std::vector<T> seq);
    std::map<T, int> computeFreqCounter(std::vector<T> seq);
    
public:
    
    std::map<T, int> getFreqCounter();

    void print();
    
    FreqCounter(std::vector<T> seq);
    
    virtual ~FreqCounter();
    
};

#endif /* FREQCOUNTER_HPP */
