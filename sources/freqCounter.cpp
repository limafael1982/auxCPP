#include "freqCounter.hpp"

template <class T>
std::set<T> FreqCounter<T>::getDifferentElementsFromVector(std::vector<T> seq)
{
	std::set<T> seqSet;
        
        for (T sElement : seq)
        {
            seqSet.insert(sElement);
        }
        
        return seqSet;
};

template <class T>
std::map<T, int> FreqCounter<T>::computeFreqCounter(std::vector<T> seq)
{
    std::map<T, int> freq;
    std::set<T> seqSet = getDifferentElementsFromVector(seq);

    for (T sElement : seqSet)
    {
        freq[sElement] = 0;
    }

    for (T sElement : seq)
    {
        int value = freq[sElement];
        value++;
        freq[sElement] = value;
    }
    return freq;        
};

template <class T>
std::map<T, int> FreqCounter<T>::getFreqCounter()
{
    return freqMap;
};

template<class T>
void FreqCounter<T>::print()
{
    for (const auto& [key, value] : freqMap)
    {
        std::cout << "[" << key << 
            "] => " << value << std::endl; 
    }	
};

template <class T>
FreqCounter<T>::FreqCounter(std::vector<T> seq)
{
    this->freqMap = computeFreqCounter(seq);
};

template <class T>
FreqCounter<T>::~FreqCounter()
{
    this->freqMap.clear();
};
